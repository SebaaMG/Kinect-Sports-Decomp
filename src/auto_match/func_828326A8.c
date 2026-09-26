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
extern int fn_82826498();


void fn_828326A8(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int aiStack_40 [16];
  
  *(undefined1 *)(param_1 + 0x3ea) = 1;
  iVar2 = param_1 + 0x2fc;
  do {
    do {
      fn_828223C8(iVar2,aiStack_40);
      if (aiStack_40[0] == 0) {
        return;
      }
      puVar4 = (undefined4 *)(aiStack_40[0] + 0x48);
      uVar5 = 0;
      uVar1 = ((*(int **)(aiStack_40[0] + 0x48))[1] - **(int **)(aiStack_40[0] + 0x48)) / 0x14;
      iVar2 = aiStack_40[0];
    } while (uVar1 == 0);
    pcVar3 = (char *)(aiStack_40[0] + 0x54);
    iVar6 = 0;
    do {
      iVar2 = aiStack_40[0];
      if (*pcVar3 == '\0') break;
      iVar2 = *(int *)*puVar4 + iVar6;
      fn_82826498(param_1,(ulonglong)**(uint **)(param_1 + 0x388) +
                              ((ulonglong)*(uint *)(iVar2 + 4) & 0x7ffffff) * 0x20,
                      *(undefined4 *)(iVar2 + 8),0xffffffff828324c0);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x14;
      iVar2 = aiStack_40[0];
    } while (uVar5 < uVar1);
  } while( true );
}

