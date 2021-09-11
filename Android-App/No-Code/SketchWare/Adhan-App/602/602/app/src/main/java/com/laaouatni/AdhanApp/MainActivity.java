package com.laaouatni.AdhanApp;

import androidx.appcompat.app.AppCompatActivity;
import androidx.annotation.*;
import android.app.*;
import android.os.*;
import android.view.*;
import android.view.View.*;
import android.widget.*;
import android.content.*;
import android.content.res.*;
import android.graphics.*;
import android.graphics.drawable.*;
import android.media.*;
import android.net.*;
import android.text.*;
import android.text.style.*;
import android.util.*;
import android.webkit.*;
import android.animation.*;
import android.view.animation.*;
import java.io.*;
import java.util.*;
import java.util.regex.*;
import java.text.*;
import org.json.*;
import android.widget.ScrollView;
import android.widget.LinearLayout;
import android.widget.TextView;
import java.util.Timer;
import java.util.TimerTask;
import android.content.Intent;
import android.net.Uri;
import android.animation.ObjectAnimator;
import android.view.animation.LinearInterpolator;
import android.view.animation.AccelerateInterpolator;
import android.view.animation.DecelerateInterpolator;
import android.view.animation.AccelerateDecelerateInterpolator;
import android.view.animation.BounceInterpolator;
import android.graphics.Typeface;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.DialogFragment;

public class MainActivity extends AppCompatActivity {
	
	private Timer _timer = new Timer();
	
	private ScrollView ScroolBackground1;
	private LinearLayout linear1;
	private TextView logo_laaouatni_text;
	
	private TimerTask TempoAprireNewActivity;
	private Intent Aprire_OrariActivity = new Intent();
	private ObjectAnimator AnimazioneTestoLogo = new ObjectAnimator();
	
	@Override
	protected void onCreate(Bundle _savedInstanceState) {
		super.onCreate(_savedInstanceState);
		setContentView(R.layout.main);
		initialize(_savedInstanceState);
		initializeLogic();
	}
	
	private void initialize(Bundle _savedInstanceState) {
		ScroolBackground1 = findViewById(R.id.ScroolBackground1);
		linear1 = findViewById(R.id.linear1);
		logo_laaouatni_text = findViewById(R.id.logo_laaouatni_text);
	}
	
	private void initializeLogic() {
		//inserire il font per il logo laaouatni.
		logo_laaouatni_text.setTextColor(0xFFFFFFFF);
		ScroolBackground1.setBackgroundColor(0xFF3F51B5);
		logo_laaouatni_text.setTypeface(Typeface.createFromAsset(getAssets(),"fonts/poppins_semi_bold.ttf"), 0);
		//animazione testo Intro
		AnimazioneTestoLogo.setTarget(logo_laaouatni_text);
		AnimazioneTestoLogo.setPropertyName("translationY");
		AnimazioneTestoLogo.setFloatValues((float)(-100), (float)(0));
		AnimazioneTestoLogo.setDuration((int)(2000));
		AnimazioneTestoLogo.setInterpolator(new DecelerateInterpolator());
		AnimazioneTestoLogo.start();
		//Aprire l'activity OrariAdhans.
		TempoAprireNewActivity = new TimerTask() {
			@Override
			public void run() {
				runOnUiThread(new Runnable() {
					@Override
					public void run() {
						Aprire_OrariActivity.setAction(Intent.ACTION_VIEW);
						Aprire_OrariActivity.setClass(getApplicationContext(), AdhanActivity.class);
						startActivity(Aprire_OrariActivity);
					}
				});
			}
		};
		_timer.schedule(TempoAprireNewActivity, (int)(400));
	}
	
	
	@Deprecated
	public void showMessage(String _s) {
		Toast.makeText(getApplicationContext(), _s, Toast.LENGTH_SHORT).show();
	}
	
	@Deprecated
	public int getLocationX(View _v) {
		int _location[] = new int[2];
		_v.getLocationInWindow(_location);
		return _location[0];
	}
	
	@Deprecated
	public int getLocationY(View _v) {
		int _location[] = new int[2];
		_v.getLocationInWindow(_location);
		return _location[1];
	}
	
	@Deprecated
	public int getRandom(int _min, int _max) {
		Random random = new Random();
		return random.nextInt(_max - _min + 1) + _min;
	}
	
	@Deprecated
	public ArrayList<Double> getCheckedItemPositionsToArray(ListView _list) {
		ArrayList<Double> _result = new ArrayList<Double>();
		SparseBooleanArray _arr = _list.getCheckedItemPositions();
		for (int _iIdx = 0; _iIdx < _arr.size(); _iIdx++) {
			if (_arr.valueAt(_iIdx))
			_result.add((double)_arr.keyAt(_iIdx));
		}
		return _result;
	}
	
	@Deprecated
	public float getDip(int _input) {
		return TypedValue.applyDimension(TypedValue.COMPLEX_UNIT_DIP, _input, getResources().getDisplayMetrics());
	}
	
	@Deprecated
	public int getDisplayWidthPixels() {
		return getResources().getDisplayMetrics().widthPixels;
	}
	
	@Deprecated
	public int getDisplayHeightPixels() {
		return getResources().getDisplayMetrics().heightPixels;
	}
}