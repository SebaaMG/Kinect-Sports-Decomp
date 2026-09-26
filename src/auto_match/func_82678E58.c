typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82638300();
extern int fn_826383A0();
extern int fn_826384A0();
extern int fn_826384C0();
extern int fn_82638790();


void fn_82678E58(int param_1)

{
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1 + 0xdd) != '\0')) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82631920(*(undefined4 *)(param_1 + 0xd8),
                        *(undefined4 *)((*(int *)(param_1 + 0xc) + 0x1d) * 4 + param_1));
                    /* WARNING: Subroutine does not return */
      fn_82631578(*(undefined4 *)(param_1 + 0xd8),
                        *(undefined4 *)((*(int *)(param_1 + 0xc) + 10) * 4 + param_1));
    }
    fn_82638790(*(undefined4 *)(param_1 + 0xd8),0xf);
    fn_826384A0(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
    fn_826384C0(*(undefined4 *)(param_1 + 0xd8),0xff);
    fn_82638300(*(undefined4 *)(param_1 + 0xd8),2);
    fn_826383A0(*(undefined4 *)(param_1 + 0xd8),0);
  }
  return;
}

