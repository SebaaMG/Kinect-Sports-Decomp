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
extern int fn_8265C9E0();
extern unsigned int lbl_821B2988;


int * fn_82361AF0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  
  puVar4 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &lbl_821B2988;
    puVar4[1] = 0;
    puVar4[2] = 0;
    iVar1 = param_2[1];
    uVar2 = *param_2;
    if ((iVar1 != 0) && (cVar5 = fn_8223AAC0(iVar1), cVar5 != '\0')) {
      if (puVar4[2] != 0) {
        fn_822315A0();
      }
      puVar4[2] = iVar1;
      puVar4[1] = uVar2;
    }
  }
  puVar3 = (undefined4 *)*param_1;
  *param_1 = (int)puVar4;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  return param_1;
}

