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
extern int fn_82E2D118();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537C8;
extern unsigned int lbl_821537D8;


longlong fn_82F345D8(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *apiStack_30 [12];
  
  apiStack_30[0] = (int *)0x0;
  if (param_2 == (byte *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      lVar4 = -0x3ff2c94a;
      goto LAB_82f34740;
    }
    lVar4 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 0xc) + 0x84))
                      ((int *)**(undefined4 **)(param_1 + 0xc),param_2);
    pbVar6 = &lbl_821537C8;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != &lbl_821537D8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82f34740;
    uVar3 = **(undefined4 **)(param_1 + 0xc);
  }
  else {
    *(undefined4 *)param_2 = lbl_8202E618;
    *(undefined4 *)(param_2 + 4) = lbl_8202E61C;
    *(undefined4 *)(param_2 + 8) = lbl_8202E620;
    *(undefined4 *)(param_2 + 0xc) = lbl_8202E624;
    lVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x84))(*(int **)(param_1 + 4),param_2);
    pbVar6 = &lbl_821537C8;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != &lbl_821537D8);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) goto LAB_82f34740;
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  lVar4 = fn_82E2D118(uVar3,apiStack_30);
  if (-1 < lVar4) {
    lVar4 = (**(code **)(*apiStack_30[0] + 0x84))(apiStack_30[0],param_2);
  }
LAB_82f34740:
  if (apiStack_30[0] != (int *)0x0) {
    (**(code **)(*apiStack_30[0] + 8))(apiStack_30[0]);
  }
  return lVar4;
}

