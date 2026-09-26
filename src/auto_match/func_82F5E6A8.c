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
extern int fn_82F534D8();
extern unsigned int lbl_82167C98;
extern unsigned int lbl_82167CE8;
extern unsigned int lbl_82167CEC;
extern unsigned int lbl_82167CF0;
extern unsigned int lbl_821AAD20;
extern V16 loadVectorLeftIndexed128();


void fn_82F5E6A8(int param_1)

{
  undefined8 in_r0;
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar1 = param_1 * 0xc;
  dVar3 = (double)lbl_821AAD20;
  fn_82F534D8((double)*(float *)(&lbl_82167CE8 + iVar1),(double)*(float *)(&lbl_82167CEC + iVar1),
               (double)*(float *)(&lbl_82167CF0 + iVar1),dVar3);
  for (iVar1 = (&lbl_82167C98)[param_1]; -1 < iVar1; iVar1 = (&lbl_82167C98)[iVar1]) {
    iVar2 = iVar1 * 0xc;
    fn_82F534D8((double)*(float *)(&lbl_82167CE8 + iVar2),(double)*(float *)(&lbl_82167CEC + iVar2)
                 ,(double)*(float *)(&lbl_82167CF0 + iVar2),dVar3);
  }
  loadVectorLeftIndexed128(in_r0,0xffffffff82167dd8);
  return;
}

