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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822794D0();
extern int fn_82279C58();
extern int fn_8266F678();
extern int fn_82672C20();
extern unsigned int iStack_28;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_821A89BC;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined4 * fn_8227F818(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  fn_822794D0(param_1,param_2,1,1,0);
  *param_1 = &lbl_821A89BC;
  if (param_3 != 0) {
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82273CD8(&uStack_30,5);
    iStack_28 = param_3;
    puVar1 = (undefined4 *)fn_82279C58(auStack_40,param_1);
    fn_82672C20(*puVar1,0xffffffff821a87e8,&uStack_30,1);
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    fn_82273C88(&uStack_30);
  }
  puVar1 = (undefined4 *)fn_82279C58(auStack_38,param_1);
  fn_8266F678(*puVar1,1);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return param_1;
}

