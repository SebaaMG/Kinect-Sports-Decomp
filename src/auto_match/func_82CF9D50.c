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
extern int fn_82CE5410();
extern int fn_82D04358();
extern int fn_82D04440();
extern int fn_82D046D0();
extern int fn_82D047D8();
extern int fn_82D048D0();
extern int fn_82D04B20();
extern int fn_82D04C78();
extern int fn_82D05178();
extern int fn_82D05468();
extern unsigned int iStack_80;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


int fn_82CF9D50(undefined8 param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  
  fn_82D05178(&uStack_70,param_1);
  iStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x80000000;
  fn_82D048D0(&uStack_70,0x2f,&iStack_80);
  uVar7 = (ulonglong)uStack_7c;
  lVar5 = 0;
  if (0 < (int)uStack_7c) {
    iVar3 = 0;
    do {
      puVar8 = (undefined4 *)(iVar3 + iStack_80);
      if (*(char *)*puVar8 == '.') {
        cVar1 = ((char *)*puVar8)[1];
        if (cVar1 == '\0') {
          uVar7 = uVar7 - 1;
          uStack_7c = (uint)uVar7;
          lVar6 = (uVar7 - lVar5 & 0x3fffffff) * 4;
          if (0 < (int)lVar6) {
            lVar6 = ((lVar6 - 1U & 0xffffffff) >> 2) + 1;
            do {
              *puVar8 = puVar8[1];
              puVar8 = puVar8 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
LAB_82cf9eb0:
            uVar7 = (ulonglong)uStack_7c;
          }
LAB_82cf9eb4:
          iVar3 = iVar3 + -4;
          lVar5 = lVar5 + -1;
        }
        else if (cVar1 == '.') {
          uVar7 = uVar7 - 1;
          uStack_7c = (uint)uVar7;
          lVar6 = (uVar7 - lVar5 & 0x3fffffff) * 4;
          if (0 < (int)lVar6) {
            lVar6 = ((lVar6 - 1U & 0xffffffff) >> 2) + 1;
            do {
              *puVar8 = puVar8[1];
              puVar8 = puVar8 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            uVar7 = uVar7 & 0xffffffff;
          }
          lVar5 = lVar5 + -1;
          iVar3 = iVar3 + -4;
          if (-1 < lVar5) {
            uVar7 = uVar7 - 1;
            uStack_7c = (uint)uVar7;
            puVar8 = (undefined4 *)(iVar3 + iStack_80);
            lVar6 = (uVar7 - lVar5 & 0x3fffffff) * 4;
            if (0 < (int)lVar6) {
              lVar6 = ((lVar6 - 1U & 0xffffffff) >> 2) + 1;
              do {
                *puVar8 = puVar8[1];
                puVar8 = puVar8 + 1;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
              goto LAB_82cf9eb0;
            }
            goto LAB_82cf9eb4;
          }
        }
      }
      lVar5 = lVar5 + 1;
      iVar3 = iVar3 + 4;
    } while ((int)lVar5 < (int)uVar7);
  }
  fn_82D04B20(param_2);
  iVar3 = 0;
  if (0 < (int)uStack_7c) {
    iVar4 = 0;
    do {
      fn_82D04C78(param_2,*(undefined4 *)(iVar4 + iStack_80));
      if (iVar3 != uStack_7c - 1) {
        fn_82D04C78(param_2,0xffffffff821aa630);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)uStack_7c);
  }
  iVar3 = fn_82D04358(param_2,0xffffffff82133a34);
  if (iVar3 == 0) {
    iVar3 = fn_82D04440(param_2,0x3a,0,0x7fffffff);
    bVar2 = false;
    if (iVar3 == -1) goto LAB_82cf9f74;
  }
  bVar2 = true;
LAB_82cf9f74:
  if (!bVar2) {
    for (iVar3 = 0; (*(char *)(*param_2 + iVar3) == '.' || (*(char *)(*param_2 + iVar3) == '/'));
        iVar3 = iVar3 + 1) {
    }
    fn_82D046D0(param_2);
    fn_82D05468(param_2,0xffffffff82133a34,0xffffffffffffffff);
  }
  fn_82D047D8(param_2,0x2f,0x5c,1);
  iVar3 = *param_2;
  iVar4 = fn_82CE5410();
  uStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),iStack_80,uStack_78 & 0x3fffffff,4);
  }
  iStack_80 = 0;
  uStack_78 = 0x80000000;
  iVar4 = fn_82CE5410();
  uStack_6c = 0;
  if ((uStack_68 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar4 + 0xc) + 0x10))
              (*(int **)(iVar4 + 0xc),uStack_70,uStack_68 & 0x3fffffff,1);
  }
  return iVar3;
}

