/* 
First Communication Attempt with the Kernel 
Lord protect me from myself

Alexander Maso PSU_ECE_373_Spring_2022
*/    

#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
	printk(KERN_INFO "Hello, kernel\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk(KERN_INFO "Goodbye, kernel\n");
}

module_init(hello_init);
module_exit(hello_exit);
