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
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_826949A8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826A98D8();
extern unsigned int iStack_4c;
extern unsigned int lbl_82005758;


longlong fn_826AA010(undefined8 param_1,int param_2,char *param_3,undefined4 *param_4,int *param_5
                      )

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  undefined4 *puStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  cVar8 = *param_3;
  piVar6 = *(int **)(param_2 + 0x74);
  lVar10 = 0;
  if (cVar8 == '\x05') {
    fn_82696D38(&puStack_50,param_3,param_2,0xffffffffffffffff,0);
    lVar4 = fn_82693A98(&puStack_50);
    lVar11 = 0;
    if (0 < lVar4) {
      do {
        iVar5 = fn_82693B08(&puStack_50,lVar11);
        if (iVar5 == 0x3a) {
          fn_826949A8(&iStack_4c,&puStack_50,0,lVar11);
          piVar6 = (int *)fn_826A98D8(param_2,&iStack_4c,0);
          if (piVar6 != (int *)0x0) {
            if ((int)lVar11 < (int)lVar4) {
              piVar7 = (int *)fn_826949A8(aiStack_48,&puStack_50,lVar11 + 1,lVar4 + 1);
              puVar1 = (undefined4 *)*piVar7;
              puVar1[2] = puVar1[2] + 1;
              uVar2 = puStack_50[2];
              puStack_50[2] = (int)((ulonglong)uVar2 - 1);
              if ((ulonglong)uVar2 - 1 == 0) {
                fn_826944C8(puStack_50);
              }
              lVar4 = (ulonglong)*(uint *)(aiStack_48[0] + 8) - 1;
              *(int *)(aiStack_48[0] + 8) = (int)lVar4;
              puStack_50 = puVar1;
              if (lVar4 == 0) {
                fn_826944C8(aiStack_48[0]);
              }
              lVar4 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
              *(int *)(iStack_4c + 8) = (int)lVar4;
              if (lVar4 == 0) {
                fn_826944C8(iStack_4c);
              }
              break;
            }
            piVar6 = (int *)0x0;
          }
          lVar9 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
          *(int *)(iStack_4c + 8) = (int)lVar9;
          if (lVar9 == 0) {
            fn_826944C8(iStack_4c);
          }
        }
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)lVar4);
    }
    if ((piVar6 != (int *)0x0) &&
       (cVar8 = (**(code **)(*piVar6 + 0x11c))(piVar6,*puStack_50,param_5,1), cVar8 != '\0')) {
      lVar10 = 1;
    }
    uVar2 = puStack_50[2];
    puStack_50[2] = (int)((ulonglong)uVar2 - 1);
    if ((ulonglong)uVar2 - 1 == 0) {
      fn_826944C8(puStack_50);
    }
  }
  else if (cVar8 != '\x06') {
    if ((cVar8 == '\x03') || (bVar3 = false, cVar8 == '\x04')) {
      bVar3 = true;
    }
    if (bVar3) {
      dVar12 = (double)fn_826972E0(param_3,param_2);
      lVar10 = 1;
      *param_5 = (int)(dVar12 - lbl_82005758);
    }
  }
  if ((lVar10 != 0) && (param_4 != (undefined4 *)0x0)) {
    *param_4 = piVar6;
  }
  return lVar10;
}

