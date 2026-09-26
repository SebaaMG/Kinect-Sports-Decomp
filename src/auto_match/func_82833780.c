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
extern int fn_82518FF0();
extern int fn_82820EF8();
extern int fn_828223C8();
extern int fn_82827750();
extern int fn_8282D818();
extern unsigned int iStack_4c;


void fn_82833780(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar4;
  int iVar3;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  int aiStack_44 [17];
  
  cVar5 = '\0';
  iVar6 = 0;
  iVar2 = param_1 + 0x2f4;
  while (fn_828223C8(iVar2,&iStack_4c), iVar2 = iStack_4c, iVar3 = param_1 + 0x2f4, iStack_4c != 0)
  {
    iVar3 = *(int *)(*(int *)(iStack_4c + 0x28) + 8);
    if (iVar3 != 0) {
      fn_8282D818(param_1,&puStack_48,8,1);
      cVar5 = cVar5 + '\x01';
      puStack_48[1] = iVar3;
      *puStack_48 = *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0xc);
      cVar4 = fn_82827750(param_1);
      iVar2 = iStack_4c;
      if (cVar4 != '\0') {
        fn_82820EF8(puStack_48 + 1,4);
        fn_82820EF8(puStack_48,4);
        iVar2 = iStack_4c;
      }
    }
  }
  while (fn_828223C8(iVar3,&iStack_4c), iStack_4c != 0) {
    piVar7 = (int *)(iStack_4c + 0x28);
    iVar2 = *(int *)(*(int *)(iStack_4c + 0x28) + 8);
    iVar3 = iStack_4c;
    if (iVar2 != 0) {
      piVar1 = *(int **)(*(int *)(iStack_4c + 0x28) + 4);
      iVar6 = iVar2 + iVar6;
      aiStack_44[0] = *piVar1;
      if ((int *)aiStack_44[0] != piVar1) {
        do {
          iVar2 = aiStack_44[0];
          fn_8282D818(param_1,&puStack_50,0x10,1);
          *(undefined2 *)((int)puStack_50 + 0xe) = *(undefined2 *)(iVar2 + 0x1e);
          *puStack_50 = *(undefined4 *)(iVar2 + 0x14);
          puStack_50[1] = *(undefined4 *)(iVar2 + 0x10);
          *(undefined1 *)(puStack_50 + 3) = *(undefined1 *)(iVar2 + 0x1c);
          *(undefined1 *)((int)puStack_50 + 0xd) = *(undefined1 *)(iVar2 + 0x1d);
          puStack_50[2] = *(undefined4 *)(iVar2 + 0x18);
          cVar4 = fn_82827750(param_1);
          if (cVar4 != '\0') {
            fn_82820EF8((int)puStack_50 + 0xe,2);
            fn_82820EF8(puStack_50,4);
            fn_82820EF8(puStack_50 + 1,4);
            fn_82820EF8(puStack_50 + 2,4);
          }
          fn_82518FF0(aiStack_44);
          iVar3 = iStack_4c;
        } while (aiStack_44[0] != *(int *)(*piVar7 + 4));
      }
    }
  }
  *(char *)(param_1 + 0x53) = cVar5;
  *(int *)(param_1 + 0x4c) = iVar6;
  cVar5 = fn_82827750(param_1);
  if (cVar5 != '\0') {
    fn_82820EF8(param_1 + 0x4c,4);
    fn_82820EF8(param_1 + 0x53,1);
  }
  return;
}

