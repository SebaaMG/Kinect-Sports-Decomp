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
extern int fn_82308E08();
extern int fn_8230C220();
extern int fn_8236BB40();
extern int fn_823CF8B0();
extern int fn_823D1358();
extern int fn_823D9428();
extern int fn_823D9538();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


void fn_823DEEF8(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((*(int *)(param_1 + 0x10) == 0) || (*(int *)(iVar1 + 0x9a0) == 0)) ||
      (iVar4 = fn_823D9428(iVar1), iVar4 == 0)) ||
     (iVar4 = fn_823D9538(iVar1,*(undefined4 *)(iVar1 + 0x9a0)), iVar4 == 0)) {
    uVar6 = 0xffffffff;
    if (*(int *)(iVar1 + 0x9a0) != 0) {
      uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x9a0) + 0x28);
    }
    *(undefined4 *)(iVar1 + 0xe28) = uVar6;
  }
  else if (*(char *)(iVar1 + 0xd84) == '\0') {
    fn_823CF8B0(iVar1,*(undefined4 *)(*(int *)(iVar1 + 0x9a0) + 0x2c),
                  *(undefined4 *)(*(int *)(iVar1 + 0x9a0) + 0x28));
  }
  if ((*(int *)(iVar1 + 0x9a0) == 0) ||
     (uVar6 = 1, *(int *)(iVar1 + 0x9a0) == *(int *)(param_1 + 0xc))) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  cVar5 = fn_82308E08(iVar1 + 0xab8);
  bVar3 = cVar5 != '\0';
  iVar7 = 0;
  iVar4 = 0;
  do {
    uVar8 = 0;
    piVar2 = *(int **)(**(int **)(iVar1 + 8) + iVar4);
    if (*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0) {
      do {
        if ((!bVar3) &&
           (((uStack_60 = uVar8, iStack_5c = iVar7,
             cVar5 = fn_8230C220(iVar1 + 0xa18,&uStack_60), cVar5 != '\0' ||
             (uStack_58 = uVar8, iStack_54 = iVar7,
             cVar5 = fn_8230C220(iVar1 + 0xa08,&uStack_58), cVar5 != '\0')) ||
            (uStack_50 = uVar8, iStack_4c = iVar7,
            cVar5 = fn_8230C220(iVar1 + 0x9f8,&uStack_50), cVar5 != '\0')))) {
          bVar3 = true;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
    }
    iVar4 = iVar4 + 4;
    iVar7 = iVar7 + 1;
  } while (iVar4 < 8);
  if ((((!bVar3) && (cVar5 = fn_82308E08(iVar1 + 0xa88), cVar5 == '\0')) &&
      (cVar5 = fn_82308E08(iVar1 + 0xb48), cVar5 == '\0')) &&
     ((((cVar5 = fn_82308E08(iVar1 + 0xb18), cVar5 == '\0' &&
        (cVar5 = fn_82308E08(iVar1 + 0xb78), cVar5 == '\0')) &&
       (((cVar5 = fn_82308E08(iVar1 + 0xba8), cVar5 == '\0' &&
         ((cVar5 = fn_82308E08(iVar1 + 0xbd8), cVar5 == '\0' &&
          (cVar5 = fn_82308E08(iVar1 + 0xc08), cVar5 == '\0')))) &&
        (cVar5 = fn_82308E08(iVar1 + 0xc68), cVar5 == '\0')))) &&
      (iVar4 = fn_8236BB40(iVar1), iVar4 != 0)))) {
    fn_823D1358(iVar1);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x9a0);
  return;
}

