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
extern int fn_827BE1C8();


undefined4 fn_827BE2E8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1[5] == 0xca) {
    fn_827BE1C8();
    param_1[5] = 0xd1;
  }
  if (param_1[5] == 0xd1) {
    while( true ) {
      if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
        (**(code **)param_1[2])(param_1);
      }
      iVar2 = (**(code **)param_1[100])(param_1);
      if (iVar2 == 0) goto LAB_827be40c;
      if (iVar2 == 2) break;
      iVar1 = param_1[2];
      if ((iVar1 != 0) && ((iVar2 == 3 || (iVar2 == 1)))) {
        iVar4 = *(int *)(iVar1 + 4) + 1;
        *(int *)(iVar1 + 4) = iVar4;
        iVar2 = *(int *)(param_1[2] + 8);
        if (iVar2 <= iVar4) {
          *(int *)(param_1[2] + 8) = param_1[0x47] + iVar2;
        }
      }
    }
    param_1[5] = 0xd2;
  }
  if (((param_1[5] == 0xd2) || (param_1[5] == 0xcf)) && (*(char *)(param_1 + 0x10) != '\0')) {
    uVar3 = *(undefined4 *)(param_1[0x62] + 0x10);
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(code **)*param_1)(param_1);
LAB_827be40c:
    uVar3 = 0;
  }
  return uVar3;
}

