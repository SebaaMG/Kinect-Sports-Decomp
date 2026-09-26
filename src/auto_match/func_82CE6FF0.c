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
extern int fn_82CE5430();
extern int fn_82CE72E8();
extern int fn_82CEFBD0();
extern int fn_82CF7428();
extern int fn_82CF75C0();
extern int fn_82CF9730();
extern int fn_82CF9A38();
extern unsigned int lbl_8213288C;
extern unsigned int lbl_821328C4;
extern unsigned int lbl_8323B210;


undefined4 * fn_82CE6FF0(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  param_1[1] = 0;
  *param_1 = &lbl_821328C4;
  fn_82CF9A38(param_1 + 2,0,0);
  puVar1 = param_1 + 7;
  fn_82CF9730(puVar1,param_1 + 2);
  param_1[0x248] = &lbl_8213288C;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 0x80000000;
  param_1[0x24d] = 0;
  fn_82CEFBD0(param_1 + 0x24e,0);
  fn_82CE72E8(param_1 + 0x25b);
  fn_82CE5430(param_1 + 0x25e);
  fn_82CF75C0(param_1 + 0x267);
  puVar3 = param_1 + 0x2b7;
  lVar2 = 0x1f;
  do {
    fn_82CF7428(puVar3);
    puVar3[0x48] = 0;
    *(undefined1 *)(puVar3 + 0x49) = 0;
    lVar2 = lVar2 + -1;
    puVar3[0x4a] = 0;
    puVar3 = puVar3 + 0x4c;
  } while (-1 < lVar2);
  lbl_8323B210 = puVar1;
  param_1[0x25d] = puVar1;
  return param_1;
}

