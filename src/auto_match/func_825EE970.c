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
extern int fn_825ED7A8();
extern int fn_825EE4D8();


void fn_825EE970(int param_1,int param_2,undefined4 *param_3,undefined8 param_4,undefined8 param_5
                  )

{
  int iVar1;
  
  iVar1 = *(int *)*param_3;
  if ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 8) != 0) {
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) | 4;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    *(undefined4 *)(iVar1 + 0x2f04) = 0;
    *(uint *)(iVar1 + 0x28dc) = *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
    fn_825EE4D8(param_1,param_2,param_5);
    *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffb;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
    *(undefined4 *)(iVar1 + 0x2f04) = 0xf;
    *(uint *)(iVar1 + 0x28dc) =
         -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 0xf | *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
    *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  }
  if ((*(uint *)((*(int *)(param_1 + 0x10) + 0x1e) * 4 + param_2) & 0x20) != 0) {
    fn_825ED7A8(param_1,param_2,param_4);
  }
  fn_825ED7A8(param_1,param_2,param_3);
  return;
}

