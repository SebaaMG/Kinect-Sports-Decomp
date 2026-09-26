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
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F68CC0();


undefined8 fn_82E76570(int *param_1,uint param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_2 & 0xffff) < (uint)*(ushort *)(param_1 + 1)) {
    iVar4 = (param_2 & 0xffff) * 0x1a;
    fn_82E4FE40(*(undefined4 *)(iVar4 + *param_1 + 0x12));
    *(undefined4 *)(iVar4 + *param_1 + 0x12) = 0;
    *(undefined4 *)(iVar4 + *param_1 + 0x16) = 0;
    if ((param_4 & 0xffffffff) != 0) {
      uVar3 = fn_82E4FE08(param_4);
      *(undefined4 *)(iVar4 + *param_1 + 0x12) = uVar3;
      iVar1 = *(int *)(iVar4 + *param_1 + 0x12);
      if (iVar1 == 0) {
        return 0xffffffff8007000e;
      }
      fn_82F68CC0(iVar1,param_3,param_4);
      *(int *)(iVar4 + *param_1 + 0x16) = (int)param_4;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

