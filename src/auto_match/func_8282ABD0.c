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
extern unsigned int *auStack_40;
extern int fn_82381BC0();
extern int fn_82511350();
extern int fn_8265C9E0();
extern int fn_828223C8();
extern int fn_828260B8();
extern int fn_82826498();
extern unsigned int iStack_3c;


void fn_8282ABD0(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined4 *apuStack_38 [14];
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar3 = param_1 + 0x2fc;
  while (fn_828223C8(iVar3,&iStack_3c), iStack_3c != 0) {
    puVar5 = (undefined4 *)(iStack_3c + 0x48);
    iVar2 = ((*(int **)(iStack_3c + 0x48))[1] - **(int **)(iStack_3c + 0x48)) / 0x14;
    lVar6 = (longlong)iVar2;
    iVar3 = iStack_3c;
    if ((iVar2 != 0) && (*(char *)(iStack_3c + 0x54) != '\0')) {
      piVar4 = (int *)(iStack_3c + 0x4c);
      if (*(int *)(iStack_3c + 0x4c) != 0) {
        fn_828260B8(*(int *)(iStack_3c + 0x4c),1);
      }
      lVar1 = fn_8265C9E0(0x10);
      if (lVar1 == 0) {
        iVar3 = 0;
      }
      else {
        fn_82511350(lVar1,auStack_40,auStack_40);
        iVar3 = (int)lVar1;
      }
      *piVar4 = iVar3;
      if (iVar2 != 0) {
        iVar3 = 0;
        do {
          iVar2 = *(int *)*puVar5 + iVar3;
          fn_82826498(param_1,((ulonglong)*(uint *)(iVar2 + 4) & 0x7ffffff) * 0x20 +
                                (ulonglong)**(uint **)(param_1 + 0x388),*(undefined4 *)(iVar2 + 8),
                        0xffffffff8282a748);
          lVar6 = lVar6 + -1;
          iVar3 = iVar3 + 0x14;
        } while (lVar6 != 0);
      }
      iVar2 = *piVar4;
      iVar3 = iStack_3c;
      if (*(int *)(iVar2 + 8) != 0) {
        puVar5 = *(undefined4 **)(iVar2 + 4);
        apuStack_38[0] = (undefined4 *)*puVar5;
        while (iVar3 = iStack_3c, apuStack_38[0] != puVar5) {
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
          *(int *)(param_1 + 0x48) = apuStack_38[0][4] + *(int *)(param_1 + 0x48);
          fn_82381BC0(apuStack_38);
        }
      }
    }
  }
  return;
}

