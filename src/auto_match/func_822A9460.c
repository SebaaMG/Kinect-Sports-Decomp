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
extern int fn_822A9580();
extern int fn_82526AF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;


undefined4 * fn_822A9460(undefined4 *param_1,int param_2,longlong param_3)

{
  undefined4 *puVar2;
  longlong lVar1;
  char cVar3;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0xb0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821AE598;
    puVar2[2] = 1;
  }
  fn_822A9580(puVar2 + 3,param_3 + 4);
  lVar1 = fn_82526AF8((ulonglong)lbl_83265A38 - 1,(ulonglong)lbl_83265A3C + 4,param_3 + 0xa0);
  puVar2[0x2b] = -(uint)(lVar1 != -1) & (int)lVar1 + 1U;
  if (*(int *)(param_2 + 0x3c) == 0) {
    lVar1 = fn_82526AF8((ulonglong)lbl_83265A38 - 1,(ulonglong)lbl_83265A3C + 4,param_3 + 0xe0
                             );
    *(uint *)(param_2 + 0x3c) = -(uint)(lVar1 != -1) & (int)lVar1 + 1U;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (puVar2 != (undefined4 *)0x0) {
    cVar3 = fn_8223AAC0(puVar2);
    if (cVar3 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = puVar2;
      *param_1 = puVar2 + 3;
    }
    fn_822315A0(puVar2);
  }
  return param_1;
}

