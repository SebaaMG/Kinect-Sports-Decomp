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
extern int fn_827BCFC0();


undefined8 fn_827BD478(int *param_1)

{
  char cVar2;
  undefined8 uVar1;
  
  if (param_1[0x5f] == 0) {
    cVar2 = fn_827BCFC0();
    if (cVar2 != '\0') goto LAB_827bd4ac;
LAB_827bd4a4:
    uVar1 = 0;
  }
  else {
LAB_827bd4ac:
    if (param_1[0x5f] == *(int *)(param_1[0x65] + 0x10) + 0xd0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x62;
      *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x10);
      (**(code **)(*param_1 + 4))(param_1,3);
      param_1[0x5f] = 0;
    }
    else {
      cVar2 = (**(code **)(param_1[6] + 0x14))(param_1);
      if (cVar2 == '\0') goto LAB_827bd4a4;
    }
    uVar1 = 1;
    *(uint *)(param_1[0x65] + 0x10) = *(int *)(param_1[0x65] + 0x10) + 1U & 7;
  }
  return uVar1;
}

