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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_82236E18();
extern int fn_8223A7A8();
extern int fn_823297C8();
extern int fn_823A9560();
extern int fn_823ECB88();
extern int fn_823F0970();
extern int fn_823F09D0();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828E2688();
extern int fn_828E3508();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_821980B4;
extern unsigned int lbl_821980BC;
extern unsigned int lbl_82198494;
extern unsigned int uStack_58;


undefined4 * fn_824043E0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_60 [2];
  undefined4 uStack_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  fn_82233428();
  *param_1 = &lbl_821980B4;
  puVar4 = param_1 + 0xc;
  param_1[10] = &lbl_821968A4;
  fn_823ECB88(puVar4);
  puVar5 = param_1 + 0x2a;
  fn_828E3508(puVar5);
  param_1[0x3c] = 0;
  param_1[0x42] = 0;
  param_1[0x2a] = &lbl_821980BC;
  puVar2 = (undefined4 *)fn_8265C9E0(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = &lbl_82198494;
  }
  fn_8223A7A8(param_1 + 0x44,puVar2);
  uStack_58 = 0;
  auStack_60[0] = 2;
  *puVar5 = &lbl_821980BC;
  puVar2 = (undefined4 *)fn_823A9560(auStack_50,&uStack_58,auStack_60);
  uStack_58 = *puVar2;
  iStack_54 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  fn_823F0970(puVar4,&uStack_58);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_82236E18(auStack_48,0xffffffff821921e0,0xffffffff821921e4);
  uStack_58 = *puVar2;
  iStack_54 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  fn_823F09D0(puVar4,&uStack_58);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_823297C8(auStack_40);
  uStack_58 = *puVar2;
  iVar1 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  iStack_54 = iVar1;
  cVar3 = fn_828E2688(puVar5);
  if (cVar3 == '\0') {
    fn_823F2E20(param_1 + 0x44,&uStack_58);
    iVar1 = iStack_54;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return param_1;
}

