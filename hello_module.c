#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_module_init(void)
{
	printk(KERN_ALERT "Hello, world\n");
	return 0;
}

static void hello_module_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world\n");
}

module_init(hello_module_init);
module_exit(hello_module_exit);
