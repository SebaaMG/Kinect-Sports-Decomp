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
extern int fn_82286F08();
extern int fn_8228BE30();
extern int fn_8229E090();
extern int fn_82359C18();
extern int fn_8265CA20();


void fn_8247CA48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_82286F08();
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    fn_8228BE30(iVar1);
    fn_8265CA20(iVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x70);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    fn_8229E090(*(int *)(param_1 + 0x74),0,0);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  fn_82359C18(param_1 + 0x50);
  return;
}

