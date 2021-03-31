
开启 ftp服务
    apt install vsftpd

    配置 /etc/vsftpd.conf

    local_enable=YES
    write_enable=YES
    重启
    /etc/init.d/vsftpd restart
    windows可ftp连接服务器了

配置vim 
    /etc/vim.vimrc
    最后添加
        set ts=4 //tab 4 个空格
        set nu  //显示行号

使用Makefile
    apt install make 
    apt install make-guile