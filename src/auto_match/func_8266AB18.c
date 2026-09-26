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
extern int fn_82668DC0();
extern int fn_82668EA0();
extern int fn_82669C68();
extern int fn_8266A4A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined4 * fn_8266AB18(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puStack00000014;
  int iStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  fn_8266A4A8(&uStack_20,param_2,param_3);
  fn_8266A4A8(&uStack_1c,iStack0000001c,uStack0000002c);
  cVar1 = fn_82668EA0(&uStack_20,&uStack_1c);
  if (cVar1 != '\0') {
    uStack_18 = fn_82669C68(uStack_1c,*(undefined4 *)(iStack0000001c + 4),uStack_20);
    fn_82668DC0(iStack0000001c,uStack_18,*(undefined4 *)(iStack0000001c + 4));
    *(undefined4 *)(iStack0000001c + 4) = uStack_18;
  }
  *puStack00000014 = uStack_20;
  return puStack00000014;
}

