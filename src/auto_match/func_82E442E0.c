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
extern int fn_82F66FC8();
extern int fn_82F66FD0();
extern int fn_82F70028();


undefined8 fn_82E442E0(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  if (param_2 == (uint *)0x0) {
    uVar3 = 0x80070057;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    if (uVar1 < (uint)param_1[2]) {
      do {
        uVar4 = uVar5;
        uVar5 = (uint)*(ushort *)param_1[1];
        iVar2 = fn_82F66FD0(uVar5);
        if (iVar2 == 0) {
          iVar2 = fn_82F66FC8(uVar5);
          if (iVar2 == 0) break;
          uVar5 = fn_82F70028(uVar5);
          uVar5 = (uVar5 & 0xffff) - 0x37;
        }
        else {
          uVar5 = uVar5 - 0x30;
        }
        if (param_3 <= uVar5) break;
        uVar5 = uVar4 * param_3 + uVar5;
        if (uVar5 < uVar4) {
          param_1[1] = uVar1;
          uVar3 = 0x80070216;
          goto LAB_82e44314;
        }
        iVar2 = param_1[1];
        param_1[1] = iVar2 + 2U;
        uVar4 = uVar5;
      } while (iVar2 + 2U < (uint)param_1[2]);
    }
    if (uVar1 != param_1[1]) {
      *param_2 = uVar4;
      return 1;
    }
    uVar3 = 0x80004005;
  }
LAB_82e44314:
  *param_1 = uVar3;
  return 0;
}

