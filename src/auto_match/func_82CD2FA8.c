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


undefined8 fn_82CD2FA8(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 4);
  if (0 < (int)uVar2) {
    iVar3 = param_1[1];
    uVar4 = *(uint *)(iVar3 + 4);
    if (0 < (int)uVar4) {
      iVar5 = *(int *)(iVar1 + 0x10);
      if (((iVar5 != 0) && (iVar5 != 3)) ||
         ((*(int *)(iVar3 + 0x10) != 0 && (*(int *)(iVar3 + 0x10) != 3)))) {
        if (param_1[0xe3d] == 0) {
          if (uVar2 != uVar4) {
            return 6;
          }
          uVar6 = *(uint *)(iVar3 + 8);
          uVar7 = (int)*(uint *)(iVar1 + 8) >> 0x1f;
          if ((*(uint *)(iVar1 + 8) ^ uVar7) - uVar7 !=
              (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) {
            return 6;
          }
        }
        else {
          if (uVar4 != param_1[0xe3b] - param_1[0xe39]) {
            return 6;
          }
          uVar6 = *(uint *)(iVar3 + 8);
          if ((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f) != param_1[0xe3c] - param_1[0xe3a]
             ) {
            return 6;
          }
        }
        if ((iVar5 == 0x31313450) &&
           (uVar2 != (((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0)) * 4)) {
          return 6;
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        if ((iVar3 == 0x31313450) &&
           (uVar4 != (((int)uVar4 >> 2) + (uint)((int)uVar4 < 0 && (uVar4 & 3) != 0)) * 4)) {
          return 6;
        }
        if ((((((iVar5 == 0x32595559) || (iVar5 == 0x59565955)) || (iVar5 == 0x55595659)) ||
             ((iVar5 == 0x56555949 || (iVar5 == 0x30323449)))) || (iVar5 == 0x32323450)) &&
           ((uVar2 & 1) != 0)) {
          return 6;
        }
        if ((((iVar3 == 0x32595559) || (iVar3 == 0x59565955)) ||
            ((iVar3 == 0x55595659 ||
             (((iVar3 == 0x56555949 || (iVar3 == 0x30323449)) || (iVar3 == 0x32323450)))))) &&
           ((uVar4 & 1) != 0)) {
          return 6;
        }
        if (((iVar5 == 0x56555949) || (iVar5 == 0x30323449)) && ((*(uint *)(iVar1 + 8) & 1) != 0)) {
          return 6;
        }
        if (((iVar3 == 0x56555949) || (iVar3 == 0x30323449)) && ((uVar6 & 1) != 0)) {
          return 6;
        }
      }
      return 0;
    }
  }
  return 6;
}

