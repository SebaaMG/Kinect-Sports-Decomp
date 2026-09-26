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


undefined4 * fn_82361F48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &lbl_821B2988;
    puVar3[1] = 0;
    puVar3[2] = 0;
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 4);
    if ((iVar1 != 0) && (cVar4 = fn_8223AAC0(iVar1), cVar4 != '\0')) {
      if (puVar3[2] != 0) {
        fn_822315A0();
      }
      puVar3[2] = iVar1;
      puVar3[1] = uVar2;
    }
  }
  return puVar3;
}

