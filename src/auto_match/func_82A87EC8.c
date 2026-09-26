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
extern unsigned int *auStack_6a0;
extern int fn_82A87660();
extern int fn_82A87B60();
extern int fn_82A8CF10();
extern unsigned int lbl_821CB794;
extern unsigned int uStack_674;
extern unsigned int uStack_678;
extern unsigned int uStack_67c;
extern unsigned int uStack_680;


undefined8 fn_82A87EC8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 auStack_6a0 [2];
  undefined **appuStack_698 [6];
  uint uStack_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  int aiStack_670 [412];
  
  auStack_6a0[0] = 0;
  uStack_67c = 0;
  uStack_678 = 0;
  uStack_674 = 0;
  fn_82A8CF10(appuStack_698);
  cVar4 = fn_82A87660(auStack_6a0,appuStack_698,&uStack_680);
  while ((cVar4 != '\0' &&
         (cVar4 = fn_82A87B60(auStack_6a0,appuStack_698,&uStack_680,aiStack_670,400,4),
         cVar4 != '\0'))) {
    if (uStack_680 !=
        (((int)uStack_680 >> 1) + (uint)((int)uStack_680 < 0 && (uStack_680 & 1) != 0)) * 2) {
      return 1;
    }
    iVar5 = 0;
    if (0 < (int)uStack_680) {
      piVar6 = aiStack_670;
      do {
        iVar1 = *(int *)(param_1 + 0x24);
        iVar5 = iVar5 + 2;
        iVar2 = *piVar6;
        piVar3 = piVar6 + 1;
        iVar8 = iVar2 + iVar1;
        iVar7 = *piVar3 + iVar1;
        piVar6 = piVar6 + 2;
        *(undefined4 *)(*piVar3 + iVar1) = *(undefined4 *)(iVar2 + iVar1);
        *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar8 + 4);
        *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar8 + 8);
        *(undefined1 *)(iVar7 + 0x10) = *(undefined1 *)(iVar8 + 0x10);
        *(undefined1 *)(iVar7 + 0x11) = *(undefined1 *)(iVar8 + 0x11);
        *(undefined1 *)(iVar7 + 0x12) = *(undefined1 *)(iVar8 + 0x12);
        *(undefined1 *)(iVar7 + 0x13) = *(undefined1 *)(iVar8 + 0x13);
        *(undefined1 *)(iVar7 + 0x14) = *(undefined1 *)(iVar8 + 0x14);
        *(undefined1 *)(iVar7 + 0x15) = *(undefined1 *)(iVar8 + 0x15);
        *(undefined1 *)(iVar7 + 0x16) = *(undefined1 *)(iVar8 + 0x16);
        *(undefined1 *)(iVar7 + 0x17) = *(undefined1 *)(iVar8 + 0x17);
      } while (iVar5 < (int)uStack_680);
    }
    appuStack_698[0] = &lbl_821CB794;
    fn_82A8CF10(appuStack_698,param_2);
    cVar4 = fn_82A87660(auStack_6a0,appuStack_698,&uStack_680);
  }
  return 0;
}

