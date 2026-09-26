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
extern int fn_82270B70();
extern int fn_82532F98();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();


void fn_822A71E8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  fn_827EF828(*(undefined4 *)(param_1 + 0x5bc));
  fn_827EFFE8(*(undefined4 *)(param_1 + 0x5bc));
  iVar3 = *(int *)(param_1 + 0x550);
  iVar2 = fn_82270B70();
  puVar1 = *(undefined4 **)(*(int *)(iVar2 + 100) * 4 + iVar3 + 0x80);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x550) + 0xac))(*(int **)(param_1 + 0x550));
  if (iVar3 == 0) {
    fn_827F0180(*(undefined4 *)(param_1 + 0x5bc),*puVar1,1,0,0);
  }
  else {
    fn_827F0180(*(undefined4 *)(param_1 + 0x5bc),puVar1[1],1,0,0);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x550) + 0x1b4) + 0x18))();
    fn_82532F98(puVar1,0xffffffff82190260);
  }
  return;
}

