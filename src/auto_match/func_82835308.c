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
extern unsigned int *auStack_5c;
extern int fn_828223C8();
extern int fn_82824738();
extern int fn_828252D0();
extern int fn_828252D8();
extern unsigned int iStack_60;


void fn_82835308(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iStack_60;
  undefined4 auStack_5c [23];
  
  *(int *)(param_1 + 0xac) = *(int *)(param_2 + 0xac) + *(int *)(param_1 + 0xac);
  iVar4 = fn_828252D0(*(int *)(param_2 + 0xa4) << 2);
  while (fn_828223C8(param_3,&iStack_60), iStack_60 != 0) {
    puVar7 = (undefined4 *)(iStack_60 + 0x48);
    iVar8 = ((*(int **)(iStack_60 + 0x48))[1] - **(int **)(iStack_60 + 0x48)) / 0x14;
    lVar6 = (longlong)iVar8;
    param_3 = iStack_60;
    if (iVar8 != 0) {
      iVar8 = 0;
      do {
        iVar9 = *(int *)*puVar7 + iVar8;
        iVar3 = *(int *)(iVar9 + 0x10) * 4;
        *(undefined4 *)(iVar9 + 4) =
             *(undefined4 *)(*(int *)(iVar9 + 4) * 4 + *(int *)(param_1 + 0x3c8));
        iVar1 = **(int **)(param_2 + 0x3bc);
        iVar2 = *(int *)(iVar1 + iVar3);
        if (iVar2 == 0) {
          auStack_5c[0] = *(undefined4 *)(iVar3 + iVar4);
        }
        else {
          cVar5 = fn_82824738(param_1,iVar2,auStack_5c);
          if (cVar5 != '\0') {
            *(undefined4 *)(*(int *)(iVar9 + 0x10) * 4 + iVar4) = auStack_5c[0];
            *(undefined4 *)(iVar1 + iVar3) = 0;
          }
        }
        lVar6 = lVar6 + -1;
        iVar8 = iVar8 + 0x14;
        *(undefined4 *)(iVar9 + 0x10) = auStack_5c[0];
        param_3 = iStack_60;
      } while (lVar6 != 0);
    }
  }
  fn_828252D8(iVar4);
  return;
}

