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
extern unsigned int *auStack_40;
extern int fn_82E3BDF8();
extern int fn_82E3C690();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8 fn_82E3C990(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *apiStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  fn_82E50CB8(param_1 + 8);
  if (param_2 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(param_1 + 0x44) & 1) == 0) {
      *param_2 = 1;
    }
    else {
      *param_2 = 0;
      apiStack_50[0] = (int *)0x0;
      uStack_48 = 0;
      uStack_44 = 0;
      fn_82E3BDF8(param_1 + 0x1ac,&uStack_48);
      while (iVar1 = fn_82E3C690(param_1 + 0x1ac,&uStack_48,auStack_40,apiStack_50), iVar1 != 0) {
        *param_2 = *param_2 + 1;
        iVar1 = (**(code **)(*apiStack_50[0] + 0x20))();
        if (iVar1 != 0) {
          *param_2 = *param_2 + 1;
        }
      }
    }
  }
  fn_82E50F10(param_1 + 8);
  return uVar2;
}

