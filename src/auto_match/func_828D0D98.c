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
extern int fn_828CFF78();
extern int fn_828D0AF8();
extern unsigned int iStack_30;
extern unsigned int lbl_8202678C;


int * fn_828D0D98(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar4;
  undefined4 *puVar3;
  int *piVar5;
  int iStack_30;
  undefined4 *puStack_2c;
  
  piVar5 = *(int **)(param_2 + 0x14);
  while( true ) {
    if (piVar5 == *(int **)(param_2 + 0x18)) {
      iVar2 = fn_8265C9E0(0xb0);
      if (iVar2 == 0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = fn_828CFF78();
      }
      puStack_2c = (undefined4 *)fn_8265C9E0(0x10);
      if (puStack_2c == (undefined4 *)0x0) {
        puStack_2c = (undefined4 *)0x0;
      }
      else {
        puStack_2c[3] = iStack_30;
        puStack_2c[1] = 1;
        *puStack_2c = &lbl_8202678C;
        puStack_2c[2] = 1;
      }
      fn_828D0AF8(param_2 + 0x14,&iStack_30);
      *param_1 = 0;
      param_1[1] = 0;
      puVar3 = puStack_2c;
      if (param_1 != &iStack_30) {
        param_1[1] = (int)puStack_2c;
        *param_1 = iStack_30;
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 != (undefined4 *)0x0) {
        fn_822315A0();
      }
      return param_1;
    }
    if (*(char *)(*piVar5 + 8) != '\0') break;
    piVar5 = piVar5 + 2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = piVar5[1];
  iVar1 = *piVar5;
  if (iVar2 == 0) {
    return param_1;
  }
  cVar4 = fn_8223AAC0(iVar2);
  if (cVar4 == '\0') {
    return param_1;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  param_1[1] = iVar2;
  *param_1 = iVar1;
  return param_1;
}

