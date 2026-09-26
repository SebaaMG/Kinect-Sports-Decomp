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
extern unsigned int *auStack_30;
extern int fn_82851B40();


void fn_82857CB8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_30 [12];
  
  fn_82851B40(param_1,*(undefined4 *)(param_2 + 0xc),auStack_30);
  iVar1 = 0;
  if (*(short *)(param_2 + 0x22) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_2 + 0x10) + 4);
    do {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(*param_1,auStack_30[0],*(undefined2 *)(puVar2 + 3),
                           *(undefined2 *)((int)puVar2 + 0xe),puVar2[2]);
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 5;
    } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0x22));
  }
  return;
}

