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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82365B38();
extern int fn_82365BD8();
extern int fn_82365DD8();
extern int fn_824C5748();
extern int fn_82566018();
extern int fn_8265C9E0();
extern unsigned int iStack_48;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82364128(int param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uStack_6c = *(undefined4 *)(param_1 + 0x530);
  uStack_70 = *(undefined4 *)(param_1 + 0x534);
  iStack_68 = 1;
  fn_82365B38(auStack_60,&iStack_68,&uStack_6c,&uStack_70);
  fn_82365BD8(&iStack_68,auStack_60);
  fn_82566018(param_1 + 0x518,&iStack_68);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  iStack_64 = 0;
  uStack_38 = CONCAT44(param_1,uStack_44);
  iStack_68 = 2;
  iStack_48 = param_1;
  uVar1 = fn_8265C9E0(0x40);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82365DD8(uVar1,&iStack_68,auStack_40,&uStack_6c,&uStack_70);
  }
  iStack_68 = 0;
  iStack_64 = 0;
  if (((uVar1 & 0xffffffff) != 0) && (cVar2 = fn_8223AAC0(uVar1), cVar2 != '\0')) {
    iStack_68 = (int)uVar1 + 0x10;
    iStack_64 = (int)uVar1;
  }
  fn_82566018(param_1 + 0x518,&iStack_68);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  fn_82365BD8(&iStack_68,auStack_60);
  fn_824C5748(param_1 + 0x4f0,&iStack_68);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_822315A0(uVar1);
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return;
}

