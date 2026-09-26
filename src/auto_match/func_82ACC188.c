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
extern int fn_82ACBFC0();


undefined8 fn_82ACC188(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (*(int *)(param_1 + 0x2c8) != 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      param_1 = fn_82ACBFC0();
    }
    uVar12 = 0;
    for (uVar6 = *(uint *)(*(int *)(param_2 + 4) + 4); ((uVar6 & 1) == 0 && (uVar6 != 0));
        uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4)) {
      uVar12 = *(int *)(uVar6 + 8) + uVar12;
    }
    for (iVar4 = *(int *)((*(uint *)(param_2 + 0x18) % 0x3e5) * 4 + *(int *)(param_1 + 0x2c8));
        iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1c)) {
      if (((*(uint *)(iVar4 + 0x18) == *(uint *)(param_2 + 0x18)) &&
          (*(int *)(iVar4 + 0xc) == *(int *)(param_2 + 0xc))) &&
         (*(int *)(iVar4 + 0x14) == *(int *)(param_2 + 0x14))) {
        uVar5 = 0;
        for (uVar6 = *(uint *)(*(int *)(iVar4 + 4) + 4); ((uVar6 & 1) == 0 && (uVar6 != 0));
            uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4)) {
          uVar5 = *(int *)(uVar6 + 8) + uVar5;
        }
        if (uVar5 == uVar12) {
          uVar6 = 0;
          if (uVar12 != 0) {
            uVar1 = *(uint *)(*(int *)(param_2 + 4) + 4);
            do {
              uVar10 = -(uint)((uVar1 & 1) == 0) & uVar1;
              uVar7 = *(uint *)(uVar10 + 8);
              uVar9 = uVar6;
              if (uVar7 <= uVar6) {
                do {
                  uVar9 = uVar9 - uVar7;
                  uVar10 = *(uint *)((uVar10 & 0xfffffffe) + 4);
                  uVar10 = -(uint)((uVar10 & 1) == 0) & uVar10;
                  uVar7 = *(uint *)(uVar10 + 8);
                } while (uVar7 <= uVar9);
              }
              uVar7 = 0;
              if (uVar5 != 0) {
                uVar2 = *(uint *)(*(int *)(iVar4 + 4) + 4);
                do {
                  uVar11 = -(uint)((uVar2 & 1) == 0) & uVar2;
                  uVar3 = *(uint *)(uVar11 + 8);
                  uVar8 = uVar7;
                  if (uVar3 <= uVar7) {
                    do {
                      uVar8 = uVar8 - uVar3;
                      uVar11 = *(uint *)((uVar11 & 0xfffffffe) + 4);
                      uVar11 = -(uint)((uVar11 & 1) == 0) & uVar11;
                      uVar3 = *(uint *)(uVar11 + 8);
                    } while (uVar3 <= uVar8);
                  }
                } while ((*(int *)((uVar8 + 4) * 4 + uVar11) != *(int *)((uVar9 + 4) * 4 + uVar10))
                        && (uVar7 = uVar7 + 1, uVar7 < uVar5));
              }
            } while ((uVar7 != uVar5) && (uVar6 = uVar6 + 1, uVar6 < uVar12));
          }
          if (uVar6 == uVar12) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

