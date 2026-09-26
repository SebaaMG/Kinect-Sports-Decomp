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
extern int fn_82230040();
extern int fn_825226C8();
extern int fn_8259A4C8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821CAA78;
extern unsigned int lbl_83265A24;
extern unsigned int uStack_5c;


undefined4 *
fn_825225F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,ulonglong param_7)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0xd4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1 + 3;
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &lbl_821CAA78;
    if (puVar3 != (undefined4 *)0x0) {
      lVar2 = param_7 + 4;
      if ((param_7 & 0xffffffff) == 0) {
        lVar2 = 0;
      }
      fn_8259A4C8(puVar3,*param_2,*param_3,*param_4,lbl_83265A24,*param_5,*param_6,lVar2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    fn_825226C8(param_1,puVar3,puVar1);
    return param_1;
  }
  uStack_5c = 0;
  ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_60);
}

