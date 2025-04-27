-- Basisinstellingen
vim.opt.tabstop = 4
vim.opt.shiftwidth = 4
vim.opt.number = true
vim.opt.relativenumber = true
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
vim.api.nvim_set_hl(0, "Keyword", { fg = "#87d7ff" })
vim.api.nvim_set_hl(0, "Type", { fg = "#5fd75f" })
vim.api.nvim_set_hl(0, "String", { fg = "#ffaf5f" })
vim.api.nvim_set_hl(0, "Function", { fg = "#87d7ff" })
vim.api.nvim_set_hl(0, "Identifier", { fg = "#87d7ff" })
vim.api.nvim_set_hl(0, "Constant", { fg = "#ffaf5f" })
vim.api.nvim_set_hl(0, "Special", { fg = "#5fd7ff" })

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
