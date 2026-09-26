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
extern int fn_82248AE8();
extern int fn_82365BD8();
extern int fn_8248D2B8();


undefined4 * fn_8248CC38(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  cVar3 = fn_8248D2B8(param_1 + 2,(int)(param_2[3] - param_2[2]) / 0xc);
  if (cVar3 != '\0') {
    iVar1 = param_2[3];
    iVar7 = param_1[2];
    for (iVar5 = param_2[2]; iVar5 != iVar1; iVar5 = iVar5 + 0xc) {
      if (iVar7 != 0) {
        fn_82365BD8(iVar7,iVar5);
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 8);
      }
      iVar7 = iVar7 + 0xc;
    }
    param_1[3] = iVar7;
  }
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  cVar3 = fn_82248AE8(param_1 + 0x13,(int)(param_2[0x14] - param_2[0x13]) >> 3);
  if (cVar3 != '\0') {
    uVar4 = (ulonglong)(uint)param_2[0x13];
    uVar2 = param_2[0x14];
    uVar6 = (ulonglong)(uint)param_1[0x13];
    if (uVar4 != uVar2) {
      do {
        if ((uVar6 & 0xffffffff) != 0) {
          fn_82365BD8(uVar6,uVar4);
        }
        uVar4 = uVar4 + 8;
        uVar6 = uVar6 + 8;
      } while ((uVar4 & 0xffffffff) != (ulonglong)uVar2);
    }
    param_1[0x14] = (int)uVar6;
  }
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  return param_1;
}

