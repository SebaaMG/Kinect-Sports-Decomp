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
extern int fn_8225C590();
extern int fn_8225D168();
extern int fn_8225D388();
extern int fn_8225D8B8();
extern int fn_823AB478();
extern int fn_82F63CA0();


void fn_8225BFE0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar5;
  undefined8 uVar4;
  
  iVar5 = fn_8225C590();
  if (param_1[4] != -1) {
    fn_8225D168();
    param_1[4] = -1;
  }
  if (*param_1 != param_1[1]) {
    *(undefined4 *)(iVar5 + 0x30) = 0;
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)param_1[1]) {
      do {
        uVar2 = *puVar1;
        fn_8225D8B8(iVar5,uVar2);
        uVar4 = fn_823AB478(uVar2);
        fn_8225D388(iVar5,uVar4);
        fn_82F63CA0(puVar1,puVar1 + 1,(param_1[1] - (int)(puVar1 + 1) >> 2) << 2);
        iVar3 = param_1[1];
        param_1[1] = iVar3 + -4;
      } while (puVar1 != (undefined4 *)(iVar3 + -4));
    }
  }
  return;
}

