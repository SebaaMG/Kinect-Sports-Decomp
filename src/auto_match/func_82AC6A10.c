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
extern int fn_82ABDD90();


uint fn_82AC6A10(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((uVar2 & 1) == 0) {
    uVar8 = uVar2;
    if (uVar2 != 0) {
      do {
        if (((*(uint *)(uVar8 + 0x1c) & 1) == 0) &&
           (uVar4 = *(uint *)(uVar8 + 0x18) & 0xfffffffe, uVar4 != 0x28)) {
          uVar7 = *(uint *)(uVar4 - 0x20) >> 7 & 0x7f;
          if (((uVar7 == 0x56) || (((uVar7 == 0x57 || (uVar7 == 0x59)) || (uVar7 == 0x5a)))) ||
             ((uVar7 == 0x54 || (bVar1 = false, uVar7 == 0x55)))) {
            bVar1 = true;
          }
          if (bVar1) {
            uVar7 = *(uint *)(uVar4 - 0x20);
            iVar5 = fn_82ABDD90(param_1,uVar7 >> 7 & 0x7f,uVar7 >> 0x13 & 7,uVar7 >> 0xe & 7);
            if (*(uint *)((*(uint *)(iVar5 + (uVar4 - 0x38)) & 0xfffffffc) + 0x1c) == param_2)
            break;
            for (iVar5 = *(int *)(param_2 + 8); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
              if (uVar8 == *(uint *)(iVar5 + 4)) {
                bVar1 = true;
                goto LAB_82ac6b44;
              }
            }
            bVar1 = false;
LAB_82ac6b44:
            if (bVar1) break;
          }
        }
        uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 4);
        if ((uVar8 & 1) != 0) goto LAB_82ac6b68;
        if (uVar8 == 0) goto LAB_82ac6b68;
      } while( true );
    }
  }
  else {
    uVar8 = 0;
  }
LAB_82ac6a34:
  if (uVar8 == 0) {
LAB_82ac6b68:
    if ((*(uint *)(param_2 & 0xfffffffe) & 1) != 0) {
      return 0;
    }
    uVar8 = *(uint *)(param_2 & 0xfffffffe) & 0xfffffffe;
    uVar4 = uVar8 - 4;
    if (uVar4 == 0) {
      return 0;
    }
    if ((*(uint *)(uVar8 + 0x2c) >> 0x17 & 1) == 0) {
      uVar4 = *(uint *)(param_2 + 0x34);
    }
  }
  else {
    uVar3 = (ulonglong)*(uint *)(uVar8 + 0x30) & 0x7ffff;
    uVar4 = *(uint *)(param_2 + 0x34);
    if ((*(uint *)(((int)(uVar3 >> 5) + 1) * 4 + *(int *)(*(uint *)(param_2 + 0x34) + 0x28)) &
        1 << ((uint)uVar3 & 0x1f)) != 0) {
      uVar4 = uVar8;
    }
  }
  uVar8 = *(uint *)(uVar4 + 0x1c);
  uVar7 = 0;
  if ((uVar8 & 1) != 0) {
    return uVar4;
  }
  uVar6 = uVar8;
  if (uVar8 == 0) {
    return uVar4;
  }
  do {
    if ((((*(uint *)(uVar6 + 8) & 0x3f80) == 0x3f00) &&
        (uVar6 != (-(uint)((uVar8 & 1) == 0) & uVar8))) &&
       (bVar1 = uVar7 != 0, uVar7 = uVar6, bVar1)) {
      return 0;
    }
    uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 0x28);
  } while (((uVar6 & 1) == 0) && (uVar6 != 0));
  if (uVar7 == 0) {
    return uVar4;
  }
  uVar8 = -(uint)((uVar2 & 1) == 0) & uVar2;
  do {
    if (uVar8 == 0) {
      return 0;
    }
    if (((*(uint *)(uVar8 + 0x1c) & 1) == 0) &&
       (uVar4 = *(uint *)(uVar8 + 0x18) & 0xfffffffe, uVar4 != 0x28)) {
      uVar6 = *(uint *)(uVar4 - 0x20) >> 7 & 0x7f;
      if ((uVar6 == 0x56) ||
         ((((uVar6 == 0x57 || (uVar6 == 0x59)) || (uVar6 == 0x5a)) ||
          ((uVar6 == 0x54 || (bVar1 = false, uVar6 == 0x55)))))) {
        bVar1 = true;
      }
      if (bVar1) {
        uVar6 = *(uint *)(uVar4 - 0x20);
        iVar5 = fn_82ABDD90(param_1,uVar6 >> 7 & 0x7f,uVar6 >> 0x13 & 7,uVar6 >> 0xe & 7);
        if ((*(uint *)(iVar5 + (uVar4 - 0x38)) & 0xfffffffc) == uVar7) goto LAB_82ac6a34;
      }
    }
    uVar8 = *(uint *)((uVar8 & 0xfffffffe) + 4);
    uVar8 = -(uint)((uVar8 & 1) == 0) & uVar8;
  } while( true );
}

