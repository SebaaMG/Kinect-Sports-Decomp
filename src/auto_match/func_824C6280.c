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
extern int fn_824C6478();
extern int fn_824C7608();
extern int fn_824C9678();
extern int fn_824C97F0();
extern int fn_8255FA88();
extern int fn_827EF828();
extern int fn_827F6320();


void fn_824C6280(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_4;
  if ((*(int *)(param_2 + 0x34) != 0) && (iVar3 == 0)) {
    fn_8234D950();
  }
  puVar1 = *(undefined4 **)(param_2 + 0x1c);
  if ((puVar1[0x7b] == 0) && (((iVar3 == 0 || (puVar1[0x7c] == 0)) || (*(int *)(param_2 + 8) != 0)))
     ) {
    fn_827EF828(param_1,*puVar1);
  }
  fn_824C7608(puVar1,param_4);
  if ((iVar3 == 0) || (*(int *)(param_2 + 8) != 0)) {
    fn_824C9678(param_1,*(undefined4 *)(param_2 + 0x28));
    fn_824C6478(param_2);
    iVar3 = *(int *)(param_2 + 0x1c);
    if (*(int *)(**(int **)(iVar3 + 0x194) + 0x114) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_827F6320();
    }
    if ((iVar2 == 1) &&
       ((*(int *)(**(int **)(iVar3 + 0x194) + 0x114) == 0 ||
        (iVar3 = fn_8255FA88(), iVar3 != 0)))) {
      fn_824C97F0(*(undefined4 *)(param_2 + 0x28),0xffffffff821adbd8);
    }
  }
  return;
}

