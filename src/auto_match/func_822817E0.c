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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82356F98();


undefined4 * fn_822817E0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x14) == iVar1) {
    fn_82356F98(param_1);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    iVar2 = *(int *)(iVar1 + -4);
    uVar3 = *(undefined4 *)(iVar1 + -8);
    if ((iVar2 != 0) && (cVar4 = fn_8223AAC0(iVar2), cVar4 != '\0')) {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = iVar2;
      *param_1 = uVar3;
    }
  }
  return param_1;
}

