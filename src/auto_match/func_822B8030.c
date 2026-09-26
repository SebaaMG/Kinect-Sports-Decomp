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
extern int fn_82532F98();
extern int fn_8255EBE0();
extern int fn_8255EDD0();
extern int fn_827F0180();


void fn_822B8030(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1[0xda] == 0) {
    fn_8255EBE0(param_1[1],param_1 + 0xdb);
  }
  else {
    fn_8255EDD0();
  }
  piVar1 = *(int **)(*param_1 + 0x8c0);
  puVar2 = (undefined4 *)piVar1[*(int *)(*(int *)(*param_1 + 0x4c) + 0x44) + 0x20];
  iVar3 = (**(code **)(*piVar1 + 0xac))(piVar1);
  if (iVar3 == 0) {
    fn_827F0180(param_1[1],*puVar2,1,0,0);
  }
  else {
    fn_827F0180(param_1[1],puVar2[1],1,0,0);
    (**(code **)(*(int *)piVar1[0x6d] + 0x18))();
    fn_82532F98(puVar2,0xffffffff82190260);
  }
  return;
}

