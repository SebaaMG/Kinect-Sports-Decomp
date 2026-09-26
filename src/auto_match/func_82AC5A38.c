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
extern int fn_82AC5320();
extern int fn_82AC5428();
extern int fn_82AC55A0();
extern int fn_82AC5698();
extern int fn_82AC5778();
extern int fn_82AC5880();


undefined8 fn_82AC5A38(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = param_1[0x12];
  if ((uint)(param_1[0x14] + iVar1) < 0xad209) {
    uVar2 = fn_82AC5320(param_1[0xb],param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82AC5428(param_1[2],param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar3 = param_1[0xc];
    if ((uVar3 == 0) ||
       ((((uVar6 = param_1[0x11], uVar6 <= uVar3 && (uVar3 + 8 <= uVar6 + iVar1)) &&
         (*(uint *)(uVar3 + 4) < 0x104)) &&
        ((uVar6 <= uVar3 && ((*(uint *)(uVar3 + 4) + 3 & 0xfffffffc) + 8 + uVar3 <= uVar6 + iVar1)))
        ))) {
      uVar2 = fn_82AC5880(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (*(char *)(param_1 + 10) == '\0') {
        if (((uint)param_1[0x11] <= (uint)param_1[3]) &&
           ((ulonglong)*(uint *)(*param_1 + 0x18) * 4 + (ulonglong)(uint)param_1[3] <=
            (longlong)param_1[0x11] + (ulonglong)(uint)param_1[0x12])) {
          uVar2 = fn_82AC55A0(param_1[4],param_1);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_82AC5698(param_1[6]);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          uVar2 = fn_82AC5778(param_1[5]);
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          goto LAB_82ac5c18;
        }
      }
      else {
        uVar3 = param_1[7];
        puVar4 = (uint *)param_1[3];
        if (((((uVar3 & 0x20000) == 0) && ((uVar3 & 0x40000) == 0)) &&
            ((uint *)param_1[0x11] <= puVar4)) &&
           ((uVar3 >> 3 & 0x7c) + (int)puVar4 <= (uint)(param_1[0x11] + param_1[0x12]))) {
          uVar6 = uVar3 >> 5 & 0x1f;
          uVar3 = 0;
          uVar5 = 0;
          if (uVar6 != 0) {
            do {
              if ((uVar5 != 0) && ((*puVar4 & 0xff) <= uVar3)) {
                return 0xffffffff80004005;
              }
              uVar5 = uVar5 + 1;
              uVar3 = *puVar4 & 0xff;
              puVar4 = puVar4 + 1;
            } while (uVar5 < uVar6);
          }
LAB_82ac5c18:
          uVar3 = param_1[0x15];
          uVar6 = uVar3 - 2;
          if (uVar6 < uVar3) {
            puVar4 = (uint *)(param_1 + uVar3 + 0x14);
            do {
              if ((*puVar4 & 0xc0000000) != 0) {
                return 0xffffffff80004005;
              }
              uVar6 = uVar6 + 1;
              puVar4 = puVar4 + 1;
            } while (uVar6 < uVar3);
          }
          return 0;
        }
      }
    }
  }
  return 0xffffffff80004005;
}

