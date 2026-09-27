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
extern int fn_82554D38();
extern int fn_82554DA8();
extern int fn_82554F20();
extern int fn_82555148();
extern int fn_82555238();
extern int fn_82559368();
extern int fn_825594C0();
extern int fn_82631920();
extern int fn_82648160();
extern int fn_827DA660();
extern int fn_82A1BB18();
extern int fn_82A1E650();
extern int fn_82A1E810();
extern int fn_82CE0410();
extern int fn_82CE04E8();
extern int iRam8327fbfc;
extern float lbl_82195DB0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831C1678;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_8326B370;
extern unsigned int lbl_8326B7C8;
extern unsigned int lbl_83276742;
extern unsigned int lbl_8327FBE8;
extern unsigned int lbl_8327FBF0;
extern unsigned int lbl_8327FBF4;
extern unsigned int lbl_8327FBF8;
extern unsigned int lbl_8327FC04;
extern unsigned int uRam8327fbec;
extern unsigned int uRam8327fc00;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82559588(void)

{
  undefined4 uVar2;
  undefined8 uVar1;
  int iVar3;
  
  iVar3 = lbl_8320A898;
  if (*(int *)(lbl_8320A898 + 0x2a88) != 0) {
    fn_82A1BB18();
  }
  uVar2 = fn_82A1BB18();
  *(undefined4 *)(iVar3 + 0x2a88) = uVar2;
  fn_82CE0410();
  uVar1 = fn_82554D38();
  uRam8327fbec = (undefined4)uVar1;
  if (lbl_8327FBF4 != 0) {
    iVar3 = fn_82554F20(uVar1,lbl_8327FBF4,lbl_8327FBF8,0);
    if (iVar3 != 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fn_82559368((&lbl_831C1678)
                    [-(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                           lbl_82195DB0)],0xffffffff8327fbfc,0xffffffff8327fc00,lbl_8327FC04);
      *(uint *)(lbl_8320A898 + 0x2efc) = *(uint *)(lbl_8320A898 + 0x2efc) & 0xc07fffff;
      *(undefined4 *)(lbl_8320A898 + 0x35f0) = 2;
      fn_82555238(uRam8327fbec);
      fn_82555148(uRam8327fbec);
      fn_82A1E650(lbl_8327FC04,0xffffffffffffffff);
    }
    fn_827DA660(lbl_8326B7C8,lbl_8327FBF4,0);
    lbl_8327FBF4 = 0;
  }
  fn_825594C0();
  if (iRam8327fbfc != 0) {
    iVar3 = fn_82554F20(uRam8327fbec,iRam8327fbfc,uRam8327fc00,0);
    if (iVar3 != 0) {
      fn_82555238(uRam8327fbec);
      fn_82555148(uRam8327fbec);
    }
    fn_827DA660(lbl_8326B7C8,iRam8327fbfc,0);
    iRam8327fbfc = 0;
  }
  fn_82554DA8(uRam8327fbec);
  uRam8327fbec = 0;
  fn_82CE04E8();
  if (lbl_83276742 != '\0') {
    do {
      fn_82631920(lbl_8320A898,0);
      fn_82648160(lbl_8320A898,lbl_8326B370,0);
    } while( true );
  }
  iVar3 = fn_82A1E650(lbl_8327FBF0,0);
  while (iVar3 != 0) {
    fn_82631920(lbl_8320A898,0);
    fn_82648160(lbl_8320A898,lbl_8326B370,0);
    iVar3 = fn_82A1E650(lbl_8327FBF0,0);
  }
  enforceInOrderExecutionIO();
  *(undefined4 *)(lbl_8320A898 + 0x2a88) = 0;
  fn_82A1E810(lbl_8327FBE8);
  return 0;
}

