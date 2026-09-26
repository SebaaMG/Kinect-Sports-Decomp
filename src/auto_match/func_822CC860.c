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
extern int fn_822CD0A8();
extern int fn_825113E0();
extern int fn_82511668();
extern int fn_8251F720();
extern unsigned int lbl_821AD208;
extern unsigned int lbl_821AD20C;
extern unsigned int lbl_821C2424;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_34;


undefined4 *
fn_822CC860(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined **ppuStack_40;
  code *pcStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined ***pppuStack_30;
  
  param_1[2] = param_2;
  uVar1 = lbl_821CC160;
  *param_1 = &lbl_821AD208;
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = param_1 + 0xe;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = param_6;
  param_1[0xd] = param_4;
  param_1[0xe] = &lbl_821C2424;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[5] = 0;
  if (*param_3 != 0) {
    uVar1 = fn_8251F720(param_3,0);
    param_1[7] = uVar1;
  }
  pppuStack_30 = &ppuStack_40;
  pcStack_3c = fn_822CD0A8;
  uStack_34 = puStack_38;
  ppuStack_40 = &lbl_821AD20C;
  puStack_38 = param_1;
  fn_82511668(puVar2,&ppuStack_40);
  fn_825113E0(param_5,0x1c,puVar2);
  fn_825113E0(param_5,0x1e,puVar2);
  fn_825113E0(param_5,0x1a,puVar2);
  fn_825113E0(param_5,0x1f,puVar2);
  return param_1;
}

