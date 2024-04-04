#include <hxcpp.h>

#ifndef INCLUDED_Box
#include <Box.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Registry
#include <Registry.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterExt
#include <flixel/effects/particles/FlxEmitterExt.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitterExt
#include <flixel/effects/particles/FlxTypedEmitterExt.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",22,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(137)
	this->previousScore = (int)0;
	HX_STACK_LINE(42)
	this->beat = Array_obj< int >::__new().Add((int)0);
	HX_STACK_LINE(40)
	this->eachBoxTypeAllowed = (int)2;
	HX_STACK_LINE(38)
	this->data = Array_obj< int >::__new();
	HX_STACK_LINE(37)
	this->currentLine = (int)0;
	HX_STACK_LINE(31)
	this->boxesPerLevel = (int)20;
	HX_STACK_LINE(30)
	this->speedIncrease = (int)0;
	HX_STACK_LINE(28)
	this->isGameOver = false;
	HX_STACK_LINE(22)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",46,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::create();
		HX_STACK_LINE(48)
		::Registry_obj::init();
		HX_STACK_LINE(50)
		::PlayState_obj::secondsPerBeat = (Float((int)60) / Float(::PlayState_obj::beatsPerMinute));
		HX_STACK_LINE(52)
		this->currentLine = (int)0;
		HX_STACK_LINE(54)
		::Box _g = ::Box_obj::__new((int)0,(int)0,(int)-16776961);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->startGameBox = _g;
		HX_STACK_LINE(55)
		this->startGameBox->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (Float((Float(::flixel::FlxG_obj::width) / Float((int)4))) / Float((int)2))));
		HX_STACK_LINE(56)
		this->startGameBox->set_y(((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (Float((Float(::flixel::FlxG_obj::width) / Float((int)4))) / Float((int)2))));
		HX_STACK_LINE(57)
		bool _g1 = this->startGameBox->set_visible(true);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(57)
		this->startGameBox->set_active(_g1);
		HX_STACK_LINE(58)
		this->add(this->startGameBox);
		HX_STACK_LINE(61)
		::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((int)5,(int)5,(int)0,HX_CSTRING(""),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		this->scoreText = _g2;
		HX_STACK_LINE(62)
		this->scoreText->set_text(((HX_CSTRING("High Score: ") + ::Registry_obj::highScore) + HX_CSTRING("\n\n\n\n\n\n\nPress box\nto play")));
		HX_STACK_LINE(63)
		this->scoreText->set_size((Float(::flixel::FlxG_obj::width) / Float((int)10)));
		HX_STACK_LINE(64)
		this->add(this->scoreText);
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(66)
			Array< ::Dynamic > _g11 = ::Registry_obj::boxes;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(66)
			while((true)){
				HX_STACK_LINE(66)
				if ((!(((_g3 < _g11->length))))){
					HX_STACK_LINE(66)
					break;
				}
				HX_STACK_LINE(66)
				Array< ::Dynamic > boxArray = _g11->__get(_g3).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(boxArray,"boxArray");
				HX_STACK_LINE(66)
				++(_g3);
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(68)
					while((true)){
						HX_STACK_LINE(68)
						if ((!(((_g21 < boxArray->length))))){
							HX_STACK_LINE(68)
							break;
						}
						HX_STACK_LINE(68)
						::Box box = boxArray->__get(_g21).StaticCast< ::Box >();		HX_STACK_VAR(box,"box");
						HX_STACK_LINE(68)
						++(_g21);
						HX_STACK_LINE(70)
						this->add(box);
					}
				}
			}
		}
		HX_STACK_LINE(73)
		this->add(::Registry_obj::particleEmitter);
		HX_STACK_LINE(74)
		this->isGameOver = true;
		HX_STACK_LINE(75)
		this->generateLevel();
	}
return null();
}


Void PlayState_obj::switchElements( int i,int j,Array< int > array){
{
		HX_STACK_FRAME("PlayState","switchElements",0x1336d23c,"PlayState.switchElements","PlayState.hx",80,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(j,"j")
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(81)
		int temp = array->__get(i);		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(82)
		array[i] = array->__get(j);
		HX_STACK_LINE(83)
		array[j] = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(PlayState_obj,switchElements,(void))

Void PlayState_obj::generateLevel( ){
{
		HX_STACK_FRAME("PlayState","generateLevel",0xcc6fad3e,"PlayState.generateLevel","PlayState.hx",87,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		int maxDifficultyPerLine = (int)1;		HX_STACK_VAR(maxDifficultyPerLine,"maxDifficultyPerLine");
		HX_STACK_LINE(89)
		Array< int > newLine = Array_obj< int >::__new();		HX_STACK_VAR(newLine,"newLine");
		HX_STACK_LINE(90)
		int difficultyOfLine = (int)0;		HX_STACK_VAR(difficultyOfLine,"difficultyOfLine");
		HX_STACK_LINE(91)
		int lastDifficultyAdjustment = (int)2;		HX_STACK_VAR(lastDifficultyAdjustment,"lastDifficultyAdjustment");
		HX_STACK_LINE(92)
		int emptyLinesInARow = (int)0;		HX_STACK_VAR(emptyLinesInARow,"emptyLinesInARow");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			while((true)){
				HX_STACK_LINE(93)
				if ((!(((_g < (int)500))))){
					HX_STACK_LINE(93)
					break;
				}
				HX_STACK_LINE(93)
				int line = (_g)++;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(95)
				int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)1,maxDifficultyPerLine,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(95)
				difficultyOfLine = _g1;
				HX_STACK_LINE(96)
				if (((difficultyOfLine == (int)0))){
					HX_STACK_LINE(98)
					(emptyLinesInARow)++;
				}
				else{
					HX_STACK_LINE(102)
					newLine = Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0);
					HX_STACK_LINE(103)
					while((true)){
						HX_STACK_LINE(103)
						if ((!(((difficultyOfLine > (int)0))))){
							HX_STACK_LINE(103)
							break;
						}
						HX_STACK_LINE(105)
						int _g11 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)3,null());		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(105)
						Float _g2 = ::Math_obj::min(_g11,difficultyOfLine);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(105)
						int newBox = ::Std_obj::_int(_g2);		HX_STACK_VAR(newBox,"newBox");
						HX_STACK_LINE(106)
						hx::SubEq(difficultyOfLine,newBox);
						HX_STACK_LINE(107)
						newLine->push(newBox);
					}
					HX_STACK_LINE(110)
					int _g3 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(110)
					int _g4 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(110)
					this->switchElements(_g3,_g4,newLine);
					HX_STACK_LINE(111)
					int _g5 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(111)
					int _g6 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(111)
					this->switchElements(_g5,_g6,newLine);
					HX_STACK_LINE(112)
					int _g7 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(112)
					int _g8 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(112)
					this->switchElements(_g7,_g8,newLine);
					HX_STACK_LINE(113)
					int _g9 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(113)
					int _g10 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(113)
					this->switchElements(_g9,_g10,newLine);
					HX_STACK_LINE(114)
					{
						HX_STACK_LINE(114)
						int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(114)
						while((true)){
							HX_STACK_LINE(114)
							if ((!(((_g11 < (int)4))))){
								HX_STACK_LINE(114)
								break;
							}
							HX_STACK_LINE(114)
							int i = (_g11)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(116)
							this->data->push(newLine->__get(i));
						}
					}
				}
				HX_STACK_LINE(119)
				if (((line == (Float(lastDifficultyAdjustment) / Float((int)2))))){
					HX_STACK_LINE(121)
					(maxDifficultyPerLine)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,generateLevel,(void))

Void PlayState_obj::startGame( ){
{
		HX_STACK_FRAME("PlayState","startGame",0x39a53123,"PlayState.startGame","PlayState.hx",128,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->speedIncrease = 0.2;
		HX_STACK_LINE(130)
		::Registry_obj::score = (int)0;
		HX_STACK_LINE(131)
		this->scoreText->set_text((HX_CSTRING("Score: ") + ::Registry_obj::score));
		HX_STACK_LINE(132)
		this->isGameOver = false;
		HX_STACK_LINE(133)
		this->startGameBox->deactivate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,startGame,(void))

Void PlayState_obj::updateScore( ){
{
		HX_STACK_FRAME("PlayState","updateScore",0x67c029f8,"PlayState.updateScore","PlayState.hx",140,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		if (((bool(!(this->isGameOver)) && bool((this->previousScore != ::Registry_obj::score))))){
			HX_STACK_LINE(142)
			this->scoreText->set_text((HX_CSTRING("Score ") + ::Registry_obj::score));
			HX_STACK_LINE(143)
			this->previousScore = ::Registry_obj::score;
			HX_STACK_LINE(145)
			if (((hx::Mod(::Registry_obj::score,(int)20) == (int)0))){
				HX_STACK_LINE(147)
				(::Registry_obj::level)++;
			}
			HX_STACK_LINE(149)
			if (((hx::Mod(::Registry_obj::score,(int)60) == (int)0))){
				HX_STACK_LINE(151)
				(this->speedIncrease)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,updateScore,(void))

Void PlayState_obj::checkForGameOver( ){
{
		HX_STACK_FRAME("PlayState","checkForGameOver",0x45320ad8,"PlayState.checkForGameOver","PlayState.hx",157,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		if ((this->isGameOver)){
			HX_STACK_LINE(159)
			{
				HX_STACK_LINE(159)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(159)
				Array< ::Dynamic > _g1 = ::Registry_obj::boxes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(159)
				while((true)){
					HX_STACK_LINE(159)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(159)
						break;
					}
					HX_STACK_LINE(159)
					Array< ::Dynamic > boxArray = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(boxArray,"boxArray");
					HX_STACK_LINE(159)
					++(_g);
					HX_STACK_LINE(161)
					{
						HX_STACK_LINE(161)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(161)
						while((true)){
							HX_STACK_LINE(161)
							if ((!(((_g2 < boxArray->length))))){
								HX_STACK_LINE(161)
								break;
							}
							HX_STACK_LINE(161)
							::Box box = boxArray->__get(_g2).StaticCast< ::Box >();		HX_STACK_VAR(box,"box");
							HX_STACK_LINE(161)
							++(_g2);
							HX_STACK_LINE(163)
							if ((box->visible)){
								HX_STACK_LINE(165)
								box->explode();
								HX_STACK_LINE(166)
								box->deactivate();
							}
						}
					}
				}
			}
			HX_STACK_LINE(170)
			this->startGameBox->activate();
			HX_STACK_LINE(171)
			if (((::Registry_obj::score > ::Registry_obj::highScore))){
				HX_STACK_LINE(173)
				::Registry_obj::highScore = ::Registry_obj::score;
				HX_STACK_LINE(174)
				::Registry_obj::saveHighScore(::Registry_obj::score);
				HX_STACK_LINE(175)
				this->scoreText->set_text(((((HX_CSTRING("Game Over \n\nScore: ") + ::Registry_obj::score) + HX_CSTRING("\nHigh Score: ")) + ::Registry_obj::highScore) + HX_CSTRING("\n\n\n\nPress box\nto play\nNew High Score!")));
			}
			else{
				HX_STACK_LINE(179)
				this->scoreText->set_text(((((HX_CSTRING("Game Over \n\nScore: ") + ::Registry_obj::score) + HX_CSTRING("\nHigh Score: ")) + ::Registry_obj::highScore) + HX_CSTRING("\n\n\n\nPress box\nto play")));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,checkForGameOver,(void))

Void PlayState_obj::playBeat( ){
{
		HX_STACK_FRAME("PlayState","playBeat",0xdfeaccbb,"PlayState.playBeat","PlayState.hx",184,0xb30d7781)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,playBeat,(void))

Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",189,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		this->super::update();
		HX_STACK_LINE(192)
		if ((this->isGameOver)){
			HX_STACK_LINE(194)
			if (((  ((!(this->startGameBox->isClicked()))) ? bool(this->startGameBox->isTouched()) : bool(true) ))){
				HX_STACK_LINE(196)
				this->startGame();
			}
		}
		else{
			HX_STACK_LINE(201)
			hx::AddEq(::PlayState_obj::beatTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(202)
			if (((bool((bool((::Registry_obj::score > (int)1000)) && bool(((::PlayState_obj::beatTimer - (Float(::PlayState_obj::secondsPerBeat) / Float((int)2))) >= (Float(::PlayState_obj::secondsPerBeat) / Float((int)5)))))) && bool(((::PlayState_obj::beatTimer - (Float(::PlayState_obj::secondsPerBeat) / Float((int)2))) < (Float(::PlayState_obj::secondsPerBeat) / Float((int)4))))))){
				HX_STACK_LINE(204)
				::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/music/kick.wav"),0.3,null(),null(),null());
			}
			HX_STACK_LINE(206)
			if (((::PlayState_obj::beatTimer >= ::PlayState_obj::secondsPerBeat))){
				HX_STACK_LINE(209)
				::String boxes = HX_CSTRING("");		HX_STACK_VAR(boxes,"boxes");
				HX_STACK_LINE(210)
				::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/music/kick.wav"),0.2,null(),null(),null());
				HX_STACK_LINE(211)
				if (((hx::Mod(((this->currentLine + (int)1)),(int)2) == (int)0))){
					HX_STACK_LINE(213)
					::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/music/snare.wav"),0.2,null(),null(),null());
				}
				HX_STACK_LINE(215)
				Array< ::Dynamic > newBoxes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(newBoxes,"newBoxes");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(216)
					while((true)){
						HX_STACK_LINE(216)
						if ((!(((_g < (int)4))))){
							HX_STACK_LINE(216)
							break;
						}
						HX_STACK_LINE(216)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(218)
						int typeOfBox = this->data->__get(((this->currentLine * (int)4) + i));		HX_STACK_VAR(typeOfBox,"typeOfBox");
						HX_STACK_LINE(219)
						hx::AddEq(boxes,(typeOfBox + HX_CSTRING(",")));
						HX_STACK_LINE(220)
						if (((typeOfBox > (int)0))){
							HX_STACK_LINE(223)
							::Box newBox = ::Registry_obj::getAvailableBox(typeOfBox);		HX_STACK_VAR(newBox,"newBox");
							HX_STACK_LINE(224)
							newBox->activate();
							HX_STACK_LINE(225)
							newBox->spawn(i);
							HX_STACK_LINE(226)
							newBoxes->push(newBox);
							HX_STACK_LINE(227)
							hx::AddEq(::Registry_obj::currentTotalLevel,typeOfBox);
						}
					}
				}
				HX_STACK_LINE(231)
				::PlayState_obj::beatTimer = (int)0;
				HX_STACK_LINE(232)
				(this->currentLine)++;
			}
			HX_STACK_LINE(234)
			bool clickWasMade = false;		HX_STACK_VAR(clickWasMade,"clickWasMade");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(235)
				Array< ::Dynamic > _g1 = ::Registry_obj::boxes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(235)
				while((true)){
					HX_STACK_LINE(235)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(235)
						break;
					}
					HX_STACK_LINE(235)
					Array< ::Dynamic > boxArray = _g1->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(boxArray,"boxArray");
					HX_STACK_LINE(235)
					++(_g);
					HX_STACK_LINE(237)
					{
						HX_STACK_LINE(237)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(237)
						while((true)){
							HX_STACK_LINE(237)
							if ((!(((_g2 < boxArray->length))))){
								HX_STACK_LINE(237)
								break;
							}
							HX_STACK_LINE(237)
							::Box box = boxArray->__get(_g2).StaticCast< ::Box >();		HX_STACK_VAR(box,"box");
							HX_STACK_LINE(237)
							++(_g2);
							HX_STACK_LINE(239)
							if ((box->visible)){
								HX_STACK_LINE(241)
								box->detectClick();
								HX_STACK_LINE(242)
								if (((  ((!((this->isGameOver = (box->y > ::flixel::FlxG_obj::height))))) ? bool(clickWasMade = !(box->visible)) : bool(true) ))){
									HX_STACK_LINE(247)
									break;
								}
							}
						}
					}
					HX_STACK_LINE(251)
					if (((bool(clickWasMade) || bool(this->isGameOver)))){
						HX_STACK_LINE(251)
						break;
					}
				}
			}
			HX_STACK_LINE(253)
			this->checkForGameOver();
			HX_STACK_LINE(254)
			this->updateScore();
		}
	}
return null();
}


int PlayState_obj::beatsPerMinute;

Float PlayState_obj::secondsPerBeat;

Float PlayState_obj::beatTimer;


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(highScore,"highScore");
	HX_MARK_MEMBER_NAME(startGameBox,"startGameBox");
	HX_MARK_MEMBER_NAME(isGameOver,"isGameOver");
	HX_MARK_MEMBER_NAME(speedIncrease,"speedIncrease");
	HX_MARK_MEMBER_NAME(boxesPerLevel,"boxesPerLevel");
	HX_MARK_MEMBER_NAME(currentLine,"currentLine");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(eachBoxTypeAllowed,"eachBoxTypeAllowed");
	HX_MARK_MEMBER_NAME(beat,"beat");
	HX_MARK_MEMBER_NAME(previousScore,"previousScore");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(highScore,"highScore");
	HX_VISIT_MEMBER_NAME(startGameBox,"startGameBox");
	HX_VISIT_MEMBER_NAME(isGameOver,"isGameOver");
	HX_VISIT_MEMBER_NAME(speedIncrease,"speedIncrease");
	HX_VISIT_MEMBER_NAME(boxesPerLevel,"boxesPerLevel");
	HX_VISIT_MEMBER_NAME(currentLine,"currentLine");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(eachBoxTypeAllowed,"eachBoxTypeAllowed");
	HX_VISIT_MEMBER_NAME(beat,"beat");
	HX_VISIT_MEMBER_NAME(previousScore,"previousScore");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"beat") ) { return beat; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playBeat") ) { return playBeat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beatTimer") ) { return beatTimer; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		if (HX_FIELD_EQ(inName,"highScore") ) { return highScore; }
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isGameOver") ) { return isGameOver; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentLine") ) { return currentLine; }
		if (HX_FIELD_EQ(inName,"updateScore") ) { return updateScore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startGameBox") ) { return startGameBox; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"speedIncrease") ) { return speedIncrease; }
		if (HX_FIELD_EQ(inName,"boxesPerLevel") ) { return boxesPerLevel; }
		if (HX_FIELD_EQ(inName,"generateLevel") ) { return generateLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"previousScore") ) { return previousScore; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"beatsPerMinute") ) { return beatsPerMinute; }
		if (HX_FIELD_EQ(inName,"secondsPerBeat") ) { return secondsPerBeat; }
		if (HX_FIELD_EQ(inName,"switchElements") ) { return switchElements_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkForGameOver") ) { return checkForGameOver_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"eachBoxTypeAllowed") ) { return eachBoxTypeAllowed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beat") ) { beat=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beatTimer") ) { beatTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"highScore") ) { highScore=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isGameOver") ) { isGameOver=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentLine") ) { currentLine=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startGameBox") ) { startGameBox=inValue.Cast< ::Box >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"speedIncrease") ) { speedIncrease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boxesPerLevel") ) { boxesPerLevel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previousScore") ) { previousScore=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"beatsPerMinute") ) { beatsPerMinute=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"secondsPerBeat") ) { secondsPerBeat=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"eachBoxTypeAllowed") ) { eachBoxTypeAllowed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("highScore"));
	outFields->push(HX_CSTRING("startGameBox"));
	outFields->push(HX_CSTRING("isGameOver"));
	outFields->push(HX_CSTRING("speedIncrease"));
	outFields->push(HX_CSTRING("boxesPerLevel"));
	outFields->push(HX_CSTRING("currentLine"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("eachBoxTypeAllowed"));
	outFields->push(HX_CSTRING("beat"));
	outFields->push(HX_CSTRING("previousScore"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("beatsPerMinute"),
	HX_CSTRING("secondsPerBeat"),
	HX_CSTRING("beatTimer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,scoreText),HX_CSTRING("scoreText")},
	{hx::fsInt,(int)offsetof(PlayState_obj,highScore),HX_CSTRING("highScore")},
	{hx::fsObject /*::Box*/ ,(int)offsetof(PlayState_obj,startGameBox),HX_CSTRING("startGameBox")},
	{hx::fsBool,(int)offsetof(PlayState_obj,isGameOver),HX_CSTRING("isGameOver")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlayState_obj,speedIncrease),HX_CSTRING("speedIncrease")},
	{hx::fsInt,(int)offsetof(PlayState_obj,boxesPerLevel),HX_CSTRING("boxesPerLevel")},
	{hx::fsInt,(int)offsetof(PlayState_obj,currentLine),HX_CSTRING("currentLine")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(PlayState_obj,data),HX_CSTRING("data")},
	{hx::fsInt,(int)offsetof(PlayState_obj,eachBoxTypeAllowed),HX_CSTRING("eachBoxTypeAllowed")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(PlayState_obj,beat),HX_CSTRING("beat")},
	{hx::fsInt,(int)offsetof(PlayState_obj,previousScore),HX_CSTRING("previousScore")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("scoreText"),
	HX_CSTRING("highScore"),
	HX_CSTRING("startGameBox"),
	HX_CSTRING("isGameOver"),
	HX_CSTRING("speedIncrease"),
	HX_CSTRING("boxesPerLevel"),
	HX_CSTRING("currentLine"),
	HX_CSTRING("data"),
	HX_CSTRING("eachBoxTypeAllowed"),
	HX_CSTRING("beat"),
	HX_CSTRING("create"),
	HX_CSTRING("switchElements"),
	HX_CSTRING("generateLevel"),
	HX_CSTRING("startGame"),
	HX_CSTRING("previousScore"),
	HX_CSTRING("updateScore"),
	HX_CSTRING("checkForGameOver"),
	HX_CSTRING("playBeat"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::beatsPerMinute,"beatsPerMinute");
	HX_MARK_MEMBER_NAME(PlayState_obj::secondsPerBeat,"secondsPerBeat");
	HX_MARK_MEMBER_NAME(PlayState_obj::beatTimer,"beatTimer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::beatsPerMinute,"beatsPerMinute");
	HX_VISIT_MEMBER_NAME(PlayState_obj::secondsPerBeat,"secondsPerBeat");
	HX_VISIT_MEMBER_NAME(PlayState_obj::beatTimer,"beatTimer");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PlayState_obj::__boot()
{
	beatsPerMinute= (int)122;
	secondsPerBeat= (int)0;
	beatTimer= (int)0;
}

