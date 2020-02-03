set autoindent
filetype plugin indent on
syntax enable
set shiftwidth=4
set tabstop=4
set softtabstop=4
set number
set smarttab
set smartindent
set expandtab
colorscheme desert
" Have Vim jump to the last position when reopening a file
if has("autocmd")
 au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
 endif
" Enable global undo
set undofile
set undodir=~/.vim/undo
