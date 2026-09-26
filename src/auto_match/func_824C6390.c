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
extern int fn_8234D950();
extern int fn_8255EBE0();
extern int fn_8255EDD0();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_82F63108();


void fn_824C6390(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_8234D950();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar1[0x7b] == 0) {
    fn_827EF828(*puVar1);
  }
  if (puVar1[0x78] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  iVar3 = (**(code **)(*(int *)puVar1[0x78] + 4))();
  puVar2 = *(undefined4 **)((iVar3 + 0x20) * 4 + puVar1[0x73]);
  if (puVar1[0x7a] == 0) {
    fn_827EFFE8(*puVar1);
  }
  else if (puVar1[0x7b] == 0) {
    fn_8255EBE0(*puVar1,puVar1 + 0x69);
  }
  else {
    fn_8255EDD0();
  }
  fn_827F0180(*puVar1,*puVar2,1,0,0);
  puVar1[0x7e] = iVar3;
  puVar1[0x7c] = 1;
  puVar1[0x7d] = 0;
  return;
}

