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
extern int fn_828223C8();
extern int fn_828252D0();
extern int fn_828281C8();
extern int fn_82828720();


void fn_82830520(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int aiStack_30 [12];
  
  uVar3 = fn_828252D0(*(undefined1 *)(param_2 + 0x51));
  *(undefined4 *)(param_1 + 0x3cc) = uVar3;
  uVar3 = fn_828252D0(*(int *)(param_2 + 0x24) << 2);
  *(undefined4 *)(param_1 + 0x3d0) = uVar3;
  uVar3 = fn_828252D0(*(int *)(param_2 + 0x28) << 2);
  *(undefined4 *)(param_1 + 0x3d4) = uVar3;
  iVar5 = 0;
  *(undefined4 *)(param_2 + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(param_2 + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_2 + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  iVar6 = param_2 + 0x2f4;
  while( true ) {
    fn_828223C8(iVar6,aiStack_30);
    if (aiStack_30[0] == 0) break;
    uVar4 = fn_828281C8(param_1,*(undefined4 *)(aiStack_30[0] + 8),0);
    *(undefined1 *)(iVar5 + *(int *)(param_1 + 0x3cc)) = uVar4;
    iVar5 = iVar5 + 1;
    iVar6 = aiStack_30[0];
  }
  puVar1 = (undefined4 *)**(int **)(param_2 + 0x2ec);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    uVar3 = fn_82828720(param_1,puVar2 + 2);
    *(undefined4 *)(puVar2[0x42] * 4 + *(int *)(param_1 + 0x3d0) + -4) = uVar3;
  }
  iVar6 = 0;
  fn_828223C8(param_2 + 0x2fc,aiStack_30);
  if (aiStack_30[0] != 0) {
    iVar5 = 0;
    do {
      if (**(int **)(aiStack_30[0] + 0x40) == aiStack_30[0]) {
        *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x3d4)) = 0;
      }
      else {
        iVar6 = iVar6 + 1;
        *(int *)(iVar5 + *(int *)(param_1 + 0x3d4)) = *(int *)(param_1 + 0x28) + iVar6;
      }
      iVar5 = iVar5 + 4;
      fn_828223C8(aiStack_30[0],aiStack_30);
    } while (aiStack_30[0] != 0);
  }
  return;
}

