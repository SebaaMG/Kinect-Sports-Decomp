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
extern int fn_82A3FF60();
extern int fn_82A5ED20();
extern int fn_82A68B48();
extern int fn_82A68BB0();


longlong fn_82A4F610(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  lVar4 = fn_82A5ED20(param_1,1,param_3,1);
  if (-1 < lVar4) {
    iVar6 = *param_3;
    iVar3 = *param_5;
    uVar1 = *(undefined2 *)(iVar6 + 2);
    *(undefined2 *)(param_1 + 0x24) = uVar1;
    uVar2 = *(undefined2 *)(iVar6 + 0xc);
    *(undefined2 *)(param_1 + 0x26) = uVar2;
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(iVar3 + 0xc);
    uVar5 = fn_82A68BB0(uVar2,uVar1);
    iVar6 = (uint)*(ushort *)(param_1 + 0x28) * (uVar5 & 0xffff);
    *(int *)(param_1 + 0x30) = iVar6;
    iVar6 = fn_82A3FF60(0xffffffff83219d50,iVar6,0x2097000a,0);
    *(int *)(param_1 + 0x2c) = iVar6;
    if (iVar6 == 0) {
      lVar4 = -0x7ff8fff2;
    }
    else {
      lVar4 = 0;
      uVar7 = fn_82A68B48(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(iVar3 + 0xe));
      *(undefined4 *)(param_1 + 0x38) = uVar7;
    }
  }
  return lVar4;
}

