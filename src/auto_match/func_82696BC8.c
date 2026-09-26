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
extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_826964E0();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_82696BC8(char *param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  int iStack_30;
  int iStack_2c;
  byte bStack_28;
  
  if (param_2 != 0) {
    piVar3 = (int *)(param_2 + 0x10);
    iVar2 = (**(code **)(*(int *)(param_2 + 0x10) + 8))(piVar3);
    if (iVar2 == 0x17) {
      uVar1 = (**(code **)(*piVar3 + 0x30))(&iStack_30,piVar3);
      fn_826964E0(param_1,uVar1);
      if (((bStack_28 & 2) == 0) && (iStack_30 != 0)) {
        fn_826824B0();
      }
      iStack_30 = 0;
      if ((bStack_28 & 1) != 0) {
        return;
      }
      if (iStack_2c == 0) {
        return;
      }
      fn_826824B0();
      return;
    }
  }
  if ((*param_1 != '\x06') || (*(int *)(param_1 + 4) != param_2)) {
    fn_826959C8(param_1);
    *(int *)(param_1 + 4) = param_2;
    *param_1 = '\x06';
    if (param_2 != 0) {
      *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
    }
  }
  return;
}

