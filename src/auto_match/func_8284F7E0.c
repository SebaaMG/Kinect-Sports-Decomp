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
extern int fn_8284D780();
extern int fn_828509F0();
extern int fn_82850DB8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8284F7E0(int param_1,int *param_2)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  param_2 = (int *)*param_2;
  if (*param_2 != -1) {
    fn_8284D780(*(undefined4 *)(param_1 + 4),&uStack_20);
    fn_828509F0(uStack_20,param_2[0xe],&uStack_1c);
    fn_82850DB8(uStack_1c,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 8));
  }
  return;
}

