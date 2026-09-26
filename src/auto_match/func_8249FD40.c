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
extern unsigned int *auStack_50;
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_824A00C8();
extern int fn_824A03D0();
extern int fn_824A08E8();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();
extern unsigned int iStack_60;
extern unsigned int lbl_821CA460;


undefined8 fn_8249FD40(int param_1,undefined8 param_2,int *param_3,int param_4,int param_5)

{
  int iVar2;
  char cVar5;
  undefined4 *puVar3;
  undefined8 uVar1;
  int iVar4;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  int iVar8;
  int *piVar9;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *apuStack_58 [2];
  undefined1 auStack_50 [80];
  
  if ((param_5 == 0) && (param_4 == 0)) {
    iVar2 = fn_824A00C8(param_1,param_3);
    fn_824A03D0(param_1,param_3);
    iStack_60 = 0;
    iVar4 = *param_3;
    fn_8225F160();
    fn_8225F3C0();
    iVar8 = 0;
    if (*(float *)(param_1 + 0x7c) + lbl_821CA460 <
        *(float *)((iVar4 * 9 + iVar2 + 4) * 4 + param_1)) {
      iVar8 = iVar2;
      iStack_60 = iVar2;
    }
    piVar9 = (int *)(param_1 + 0x78);
    if ((*(int **)(param_1 + 0x78) != (int *)0x0) &&
       (cVar5 = (**(code **)(**(int **)(param_1 + 0x78) + 4))(), cVar5 != '\0')) {
      fn_82536288(piVar9);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    if ((*piVar9 == 0) && (*(int *)(param_1 + 0x74) != iVar8)) {
      puVar3 = *(undefined4 **)(param_1 + 100);
      puStack_5c = puVar3;
      puVar6 = (undefined4 *)puVar3[1];
      while (*(char *)((int)puVar6 + 0x15) == '\0') {
        if ((int)puVar6[3] < iVar8) {
          puVar6 = (undefined4 *)puVar6[2];
        }
        else {
          puStack_5c = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      if ((puStack_5c == *(undefined4 **)(param_1 + 100)) || (iVar8 < (int)puStack_5c[3])) {
        ppuVar7 = apuStack_58;
        apuStack_58[0] = *(undefined4 **)(param_1 + 100);
      }
      else {
        ppuVar7 = &puStack_5c;
      }
      if (*ppuVar7 != puVar3) {
        puVar3 = (undefined4 *)fn_824A08E8(param_1 + 0x60,&iStack_60);
        puVar3 = (undefined4 *)*puVar3;
        fn_828648F0(auStack_50,0xffffffff8329288c);
        uVar1 = fn_828647D8();
        apuStack_58[0] = puVar3;
        iVar4 = fn_82535298(apuStack_58,uVar1,0xffffffff83296bc0,0xffffffff83296bd0);
        *piVar9 = iVar4;
        fn_82864898(auStack_50);
        *(int *)(param_1 + 0x70) = iStack_60;
        *(int *)(param_1 + 0x74) = iStack_60;
      }
    }
  }
  return 1;
}

