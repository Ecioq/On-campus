-- Basisinstellingen
vim.opt.tabstop = 4
vim.opt.shiftwidth = 4
vim.opt.number = true
vim.opt.relativenumber = false 
vim.opt.termguicolors = true

-- Klassiek Vim kleurenschema met verbeterde syntax highlighting
vim.cmd("colorscheme default")

-- Syntax highlighting instellingen (zonder Treesitter)
vim.opt.syntax = "enable"  -- Zorg dat syntax highlighting aan staat
vim.opt.filetype = "on"    -- Zorg dat filetype detection aan staat
vim.opt.filetype.plugin = "on"
vim.opt.filetype.indent = "on"

-- Custom highlights voor klassieke Vim-stijl
vim.api.nvim_set_hl(0, "Comment", { fg = "#87afdf", italic = true })
vim.api.nvim_set_hl(0, "Keyword", { fg = "#FFFF00" })
vim.api.nvim_set_hl(0, "@keyword.return", { link = "Keyword" })
vim.api.nvim_set_hl(0, "Conditional", { fg = "#FFFF00" })
vim.api.nvim_set_hl(0, "Type", { fg = "#5fd75f" })
vim.api.nvim_set_hl(0, "String", { fg = "#9b59b6" })
vim.api.nvim_set_hl(0, "Function", { fg = "#87d7ff" })
vim.api.nvim_set_hl(0, "Identifier", { fg = "#87d7ff" })
vim.api.nvim_set_hl(0, "Constant", { fg = "#ffaf5f" })
vim.api.nvim_set_hl(0, "Special", { fg = "#5fd7ff" })
vim.api.nvim_set_hl(0, "Repeat", { fg = "#FFFF00" })
vim.api.nvim_set_hl(0, "Statement", { fg = "#FFFF00" })
vim.api.nvim_set_hl(0, "Character", { fg = "#9b59b6" })
vim.api.nvim_set_hl(0, "@function.builtin", { fg = "#ff0000" })
vim.api.nvim_set_hl(0, "@function.macro", { fg = "#ff0000" })  -- Voor macro's zoals malloc
vim.cmd [[
  syntax enable

  syntax clear String
  syntax clear Character

  highlight Number guifg=magenta ctermfg=magenta
  syntax match Number /\v\d+(\.\d+)?/

  highlight MyPurpleString guifg=magenta ctermfg=magenta
  syntax match MyPurpleString /"\zs[^"]*\ze"/

  highlight MyPurpleChar guifg=magenta ctermfg=magenta
  syntax match MyPurpleChar /'\zs[^']*\ze'/

  syntax match MyFunction /\<rotate_[a-zA-Z0-9_]*\>/ containedin=Function,Identifier
  highlight MyFunction guifg=#87d7ff gui=bold

  syntax sync fromstart

  syn match CFunctions "\<malloc\>\|\<free\>\|\<calloc\>\|\<realloc\>"
  hi CFunctions guifg=#ff0000 gui=bold
]]




vim.opt.undofile = true
vim.opt.undodir = vim.fn.stdpath("config") .. "/undodir"




-- F5 keymap voor C compilatie
vim.keymap.set("n", "<F5>", function()
  vim.cmd("w")
  local filename = vim.fn.expand("%:r")
  vim.cmd("!gcc % -o " .. filename .. " && ./" .. filename)
end, { desc = "Compile en run C file" })

-- bootstrap lazy.nvim (zonder Treesitter plugin)
local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not vim.loop.fs_stat(lazypath) then
  vim.fn.system({
    "git", "clone", "--filter=blob:none",
    "https://github.com/folke/lazy.nvim.git",
    "--branch=stable",
    lazypath
  })
end
vim.opt.rtp:prepend(lazypath)

-- Plugin setup (zonder Treesitter)
require("lazy").setup({
  {
    "numToStr/Comment.nvim",
    config = true
  },
  {
    "nvim-lualine/lualine.nvim",
    config = function()
      require("lualine").setup({
        options = {
          theme = "auto",
          component_separators = "|",
          section_separators = "",
        }
      })
    end
  },
  {
  "nvim-tree/nvim-tree.lua",
  dependencies = { "nvim-tree/nvim-web-devicons" }, -- mooie icoontjes
  config = function()
    require("nvim-tree").setup({})
    vim.keymap.set("n", "<C-n>", ":NvimTreeToggle<CR>", { silent = true, desc = "Toggle NvimTree" })
  end
},

{
  "Diogo-ss/42-header.nvim",
  dependencies = { "nvim-lua/plenary.nvim" },
  config = function()
    require("42header").setup({
      mail = "marvin@42.fr",
      user = "side-boe"
    })
  end
},






{
  "nvim-treesitter/nvim-treesitter",
  build = ":TSUpdate",
  config = function()
    require'nvim-treesitter.configs'.setup {
      ensure_installed = { "lua", "c", "cpp", "bash", "python" }, -- welke talen je wilt
      highlight = { enable = false },
    }
  end
},


  {
    "nvim-telescope/telescope.nvim",
    dependencies = { "nvim-lua/plenary.nvim" },
    config = function()
      require("telescope").setup()
      local builtin = require("telescope.builtin")
      vim.keymap.set("n", "<leader>ff", builtin.find_files, {})
      vim.keymap.set("n", "<leader>fg", builtin.live_grep, {})
    end
  }
})

-- Extra Vim-like instellingen
vim.opt.showmatch = true   -- Highlight matching brackets
vim.opt.ignorecase = true  -- Case insensitive search
vim.opt.smartcase = true   -- Tenzij hoofdletters gebruikt worden
vim.opt.hlsearch = true    -- Highlight search results
vim.opt.incsearch = true   -- Incrementeel zoeken
vim.opt.backspace = "indent,eol,start"  -- Zorg dat backspace goed werkt

-- Automatisch herladen van syntax bij kleurschema wijzigingen
vim.api.nvim_create_autocmd("ColorScheme", {
  pattern = "*",
  callback = function()
    vim.cmd("syntax enable")
    vim.cmd("filetype plugin indent on")
  end
})

-- Filetype-specifieke instellingen (voorbeeld voor C)
vim.api.nvim_create_autocmd("FileType", {
  pattern = "c",
  callback = function()
    vim.opt_local.cindent = true
    vim.opt_local.tabstop = 4
    vim.opt_local.shiftwidth = 4
  end
})


